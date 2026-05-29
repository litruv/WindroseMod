#pragma once
#include "CoreMinimal.h"
#include "ER5HeightModifier.generated.h"

UENUM(BlueprintType)
enum class ER5HeightModifier : uint8 {
    None,
    Radial,
    Rectangular,
    External,
};

