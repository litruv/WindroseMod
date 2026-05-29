#pragma once
#include "CoreMinimal.h"
#include "ER5ManualPlacedObjectAlignment_V0_10_0.generated.h"

UENUM(BlueprintType)
enum class ER5ManualPlacedObjectAlignment_V0_10_0 : uint8 {
    None,
    ClosestWaterBorder,
    ClosestBiomeBorder,
};

