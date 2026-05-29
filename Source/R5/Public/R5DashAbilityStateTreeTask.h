#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5DashAbilityStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5DashAbilityStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5DashAbilityStateTreeTask();
};

