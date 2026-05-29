#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5BatteryShotAbility.generated.h"

class UR5AT_RangeWeapon_Launcher_Base;
class UR5ShipShootHandlingAbilityTechData;

UCLASS(Blueprintable)
class R5_API UR5BatteryShotAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipShootHandlingAbilityTechData* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AT_RangeWeapon_Launcher_Base*> TaskArray;
    
public:
    UR5BatteryShotAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskShootTaskFinished();
    
};

