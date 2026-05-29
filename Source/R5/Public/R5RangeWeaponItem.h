#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponSourceObjectInterface.h"
#include "R5EquipmentItem.h"
#include "R5RangeWeaponItem.generated.h"

class UR5RangeWeaponItemParams;
class UR5RangeWeaponItemUI;
class UR5RangeWeaponItemVisual;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5RangeWeaponItem : public UR5EquipmentItem, public IR5DrawWeaponSourceObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClipAmmoUpdated, int32, NewAmmo, int32, OldAmmo, int32, MaxAmmo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClipAmmoUpdated OnClipAmmoUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemVisual* RangeWeaponItemVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemUI* RangeWeaponItemUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemParams* Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClipAmmo, meta=(AllowPrivateAccess=true))
    int32 ClipAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxClipAmmo, meta=(AllowPrivateAccess=true))
    int32 MaxClipAmmo;
    
public:
    UR5RangeWeaponItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxClipAmmo(int32 OldMaxClipAmmo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClipAmmo(int32 OldClipAmmo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5RangeWeaponItemUI* GetRangeWeaponItemUI() const;
    

    // Fix for true pure virtual functions not being implemented
};

