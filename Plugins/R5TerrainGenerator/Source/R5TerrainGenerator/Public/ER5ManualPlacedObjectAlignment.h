#pragma once
#include "CoreMinimal.h"
#include "ER5ManualPlacedObjectAlignment.generated.h"

UENUM(BlueprintType)
enum class ER5ManualPlacedObjectAlignment : uint8 {
    None,
    ClosestWaterBorder,
    ClosestBiomeBorder,
};

