#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5DynamicComponent -FallbackName=R5DynamicComponent
#include "R5DynamicComponent.h"
#include "ReplicatedEquippedItemsArray.h"
#include "R5EquipmentComponent.generated.h"

class UR5BLInventorySlotView;
class UR5BLInventoryView;
class UR5EquipmentItemVisual;
class UR5EquipmentUI;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5EquipmentComponent : public UR5DynamicComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipmentChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentChanged OnEquipmentChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquipmentItems, meta=(AllowPrivateAccess=true))
    FReplicatedEquippedItemsArray EquipmentItems;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5BLInventorySlotView*> EquipmentSlotsView;
    
public:
    UR5EquipmentComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipmentItems();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryReadyToUpdate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentUI* GetUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentItemVisual* GetFirstItemVisualWithSlotType(const int32 SlotTypeBitmask) const;
    
};

