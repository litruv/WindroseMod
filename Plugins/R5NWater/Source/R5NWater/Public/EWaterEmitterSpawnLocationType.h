#pragma once
#include "CoreMinimal.h"
#include "EWaterEmitterSpawnLocationType.generated.h"

UENUM(BlueprintType)
enum class EWaterEmitterSpawnLocationType : uint8 {
    Point,
    Circle,
    Rect,
};

