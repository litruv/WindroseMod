#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponRecoilAbility.generated.h"

class UR5RangeWeaponRecoilAbilityTechParams;
class UR5RecoilTask_Base;

UCLASS(Abstract, Blueprintable)
class R5_API UR5RangeWeaponRecoilAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponRecoilAbilityTechParams* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RecoilTask_Base* RecoilTask;
    
public:
    UR5RangeWeaponRecoilAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void RecoilFinished();
    
};

