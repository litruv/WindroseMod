#pragma once
#include "CoreMinimal.h"
#include "ER5NWaterDebugModeType.generated.h"

UENUM(BlueprintType)
enum class ER5NWaterDebugModeType : uint8 {
    None,
    GeometryLODs,
    LandscapeHMap,
    LandscapeDistance,
    LandscapeDirection,
    LandscapeAreas,
    WaterBiomes,
    OceanWaveLargeWeight,
    OceanWaveMediumWeight,
    CoastlineWaveWeight,
    Max,
};

