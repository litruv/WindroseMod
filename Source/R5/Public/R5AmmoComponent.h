#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5AmmoComponent.generated.h"

class UR5AmmoComponentParams;
class UR5BLAmmoBaseParams;
class UR5BLInventoryModuleView;
class UR5BLInventorySlotView;
class UR5BLInventoryView;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AmmoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutoUpdateAmmoChanged, bool, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAmmoChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoChanged OnAmmoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoChanged OnAmmoItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutoUpdateAmmoChanged OnAutoUpdateAmmoChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AmmoComponentParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryModuleView* AmmoModuleView;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, UR5BLAmmoBaseParams*> AdditionalAmmoModifiers;
    
public:
    UR5AmmoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableItemsCount(UR5BLInventorySlotView* AmmoSlotView, const bool bOnlyAmmo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoUpdateAmmoStatus() const;
    
};

