#pragma once
#include "CoreMinimal.h"
#include "ER5FlatnessShape.generated.h"

UENUM(BlueprintType)
enum class ER5FlatnessShape : uint8 {
    Radial,
    Rectangular,
    Custom,
};

