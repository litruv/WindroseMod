#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5AIPawnParamsStateTreeEvaluator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIPawnParamsStateTreeEvaluator : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5AIPawnParamsStateTreeEvaluator();
};

