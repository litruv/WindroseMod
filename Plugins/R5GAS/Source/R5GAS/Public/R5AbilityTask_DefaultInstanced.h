#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_DefaultInstanced.generated.h"

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5AbilityTask_DefaultInstanced : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_DefaultInstanced();

};

