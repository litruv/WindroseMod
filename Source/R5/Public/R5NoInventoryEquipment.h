#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5DynamicComponent -FallbackName=R5DynamicComponent
#include "R5DynamicComponent.h"
#include "R5NoInventoryEquipment.generated.h"

class UR5EquipmentItem;
class UR5NoInventoryEquipmentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5NoInventoryEquipment : public UR5DynamicComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoInventoryEquipmentParams* EquipmentParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_CreatedItems, meta=(AllowPrivateAccess=true))
    TArray<UR5EquipmentItem*> CreatedItems;
    
public:
    UR5NoInventoryEquipment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CreatedItems();
    
};

