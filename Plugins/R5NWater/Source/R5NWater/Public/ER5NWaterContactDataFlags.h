#pragma once
#include "CoreMinimal.h"
#include "ER5NWaterContactDataFlags.generated.h"

UENUM(BlueprintType)
enum class ER5NWaterContactDataFlags : uint8 {
    None = 0,
    ApplyCuttingWater = 1,
    ApplyLocalWaterBodies,
    SimpleWaterComputation = 4,
    ComputeFlow = 8,
};

