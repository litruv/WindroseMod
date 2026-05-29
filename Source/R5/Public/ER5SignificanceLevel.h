#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.generated.h"

UENUM(BlueprintType)
enum class ER5SignificanceLevel : uint8 {
    None,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
    MAX = VeryHigh,
};

