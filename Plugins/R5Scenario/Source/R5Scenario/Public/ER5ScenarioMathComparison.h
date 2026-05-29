#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioMathComparison.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioMathComparison : uint8 {
    Less,
    LessEqual,
    Equal,
    GreaterEqual,
    Greater,
    NotEqual,
};

