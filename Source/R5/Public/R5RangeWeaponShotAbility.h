#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponShotAbility.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5AT_RangeWeapon_Launcher_Base;
class UR5RangeWeaponFXTask;
class UR5RangeWeaponShotAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponShotAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponShotAbilityTechParams* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* PlayAnimMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AT_RangeWeapon_Launcher_Base* LaunchTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponFXTask* FXTask;
    
public:
    UR5RangeWeaponShotAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished();
    
};

