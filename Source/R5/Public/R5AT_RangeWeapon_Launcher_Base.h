#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AT_RangeWeapon_Launcher_Base.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AT_RangeWeapon_Launcher_Base : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTaskFinished);
    
    UR5AT_RangeWeapon_Launcher_Base();

};

