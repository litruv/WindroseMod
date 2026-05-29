#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeEvaluatorBase.h"
#include "R5STE_BattleManagerGridToken.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STE_BattleManagerGridToken : public FR5StateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FR5STE_BattleManagerGridToken();
};

