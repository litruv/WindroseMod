#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5STE_GetArtilleryRange.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STE_GetArtilleryRange : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5STE_GetArtilleryRange();
};

