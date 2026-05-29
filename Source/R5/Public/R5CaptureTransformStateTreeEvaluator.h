#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5CaptureTransformStateTreeEvaluator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CaptureTransformStateTreeEvaluator : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5CaptureTransformStateTreeEvaluator();
};

