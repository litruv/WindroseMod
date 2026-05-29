#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponHandlingAbility.generated.h"

class UR5RangeWeaponHandlingAbilityTechParams;
class UR5ScatterUITask;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponHandlingAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponHandlingAbilityTechParams* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScatterUITask* ScatterUITask;
    
public:
    UR5RangeWeaponHandlingAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged();
    
    UFUNCTION(BlueprintCallable)
    void AmmoItemUpdated();
    
};

