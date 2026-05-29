#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponPassiveReloadAbility.generated.h"

class UR5AT_WaitDelayWithPause;
class UR5RangeWeaponPassiveReloadAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponPassiveReloadAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponPassiveReloadAbilityTechParams* TechParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AT_WaitDelayWithPause* WaitWithPauseAbilityTask;
    
public:
    UR5RangeWeaponPassiveReloadAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerRangeWeaponItemAmmoUpdated(int32 NewAmmo, int32 OldAmmo, int32 MaxAmmo);
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged();
    
};

