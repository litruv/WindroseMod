#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_SensorData_WaterLevel_SensorState.generated.h"

UENUM(BlueprintType)
enum class ER5NPhys_SensorData_WaterLevel_SensorState : uint8 {
    CompletelyAboveWater,
    PartiallyInWater,
    CompletelyUnderWater,
};

