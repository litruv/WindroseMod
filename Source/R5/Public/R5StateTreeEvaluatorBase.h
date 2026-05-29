#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeEvaluatorCommonBase -FallbackName=StateTreeEvaluatorCommonBase
#include "StateTreeEvaluatorBase.h"
#include "R5StateTreeEvaluatorBase.generated.h"

USTRUCT(BlueprintType)
struct FR5StateTreeEvaluatorBase : public FStateTreeEvaluatorCommonBase {
    GENERATED_BODY()
public:
    R5_API FR5StateTreeEvaluatorBase();
};

