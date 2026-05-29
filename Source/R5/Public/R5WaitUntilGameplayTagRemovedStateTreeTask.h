#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5WaitUntilGameplayTagRemovedStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5WaitUntilGameplayTagRemovedStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5WaitUntilGameplayTagRemovedStateTreeTask();
};

