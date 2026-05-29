#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5GetTargetsFromTargetingComponentStateTreeEvaluator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetTargetsFromTargetingComponentStateTreeEvaluator : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5GetTargetsFromTargetingComponentStateTreeEvaluator();
};

