#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AT_WaitDelayWithPause.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AT_WaitDelayWithPause : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AT_WaitDelayWithPause();

};

