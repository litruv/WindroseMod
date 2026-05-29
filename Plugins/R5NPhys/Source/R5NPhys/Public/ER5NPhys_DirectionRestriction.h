#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_DirectionRestriction.generated.h"

UENUM(BlueprintType)
enum class ER5NPhys_DirectionRestriction : uint8 {
    AnyDirection,
    Horizontal,
    Vertical,
    VerticalPositive,
    VerticalNegative,
};

