#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5ScatterUITask.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScatterUITask : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5ScatterUITask();

};

