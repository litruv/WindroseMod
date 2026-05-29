#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5STTEvaluator_GetShipStrandingState.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STTEvaluator_GetShipStrandingState : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5STTEvaluator_GetShipStrandingState();
};

