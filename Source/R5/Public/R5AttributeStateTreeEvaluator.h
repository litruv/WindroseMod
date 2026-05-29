#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5AttributeStateTreeEvaluator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AttributeStateTreeEvaluator : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5AttributeStateTreeEvaluator();
};

