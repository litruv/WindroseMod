#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5AbilitySystemGameplayEventStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AbilitySystemGameplayEventStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5AbilitySystemGameplayEventStateTreeTask();
};

