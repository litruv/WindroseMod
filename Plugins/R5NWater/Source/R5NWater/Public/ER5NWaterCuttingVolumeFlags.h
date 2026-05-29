#pragma once
#include "CoreMinimal.h"
#include "ER5NWaterCuttingVolumeFlags.generated.h"

UENUM(BlueprintType)
enum class ER5NWaterCuttingVolumeFlags : uint8 {
    None = 0,
    Ocean = 1,
    WaterBody,
};

