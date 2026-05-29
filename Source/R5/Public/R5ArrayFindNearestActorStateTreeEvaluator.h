#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5ArrayFindNearestActorStateTreeEvaluator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ArrayFindNearestActorStateTreeEvaluator : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5ArrayFindNearestActorStateTreeEvaluator();
};

