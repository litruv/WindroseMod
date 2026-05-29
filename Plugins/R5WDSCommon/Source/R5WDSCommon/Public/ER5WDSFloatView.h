#pragma once
#include "CoreMinimal.h"
#include "ER5WDSFloatView.generated.h"

UENUM(BlueprintType)
enum class ER5WDSFloatView : uint8 {
    Percentage,
    Proportion,
    Multiplier,
};

