#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5ActivateAbilityStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ActivateAbilityStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5ActivateAbilityStateTreeTask();
};

