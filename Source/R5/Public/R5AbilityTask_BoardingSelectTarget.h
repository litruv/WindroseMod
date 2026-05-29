#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_BoardingSelectTarget.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_BoardingSelectTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_BoardingSelectTarget();

};

