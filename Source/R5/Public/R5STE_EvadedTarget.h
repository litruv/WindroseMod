#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5STE_EvadedTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STE_EvadedTarget : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5STE_EvadedTarget();
};

