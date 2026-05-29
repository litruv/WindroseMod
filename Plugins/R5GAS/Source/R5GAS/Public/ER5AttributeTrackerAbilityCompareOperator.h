#pragma once
#include "CoreMinimal.h"
#include "ER5AttributeTrackerAbilityCompareOperator.generated.h"

UENUM(BlueprintType)
enum class ER5AttributeTrackerAbilityCompareOperator : uint8 {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
};

