#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenarioMathComparison.generated.h"

UENUM(BlueprintType)
enum class ER5BLScenarioMathComparison : uint8 {
    Less,
    LessEqual,
    Equal,
    GreaterEqual,
    Greater,
    NotEqual,
};

