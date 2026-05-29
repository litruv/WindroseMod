#pragma once
#include "CoreMinimal.h"
#include "ER5AS_DoubleValueSelectorPlace.generated.h"

UENUM(BlueprintType)
enum class ER5AS_DoubleValueSelectorPlace : uint8 {
    Value,
    Memory,
    AttributeSet,
};

