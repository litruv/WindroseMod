#pragma once
#include "CoreMinimal.h"
#include "ER5PlacementMode_V0_8_0.generated.h"

UENUM(BlueprintType)
enum class ER5PlacementMode_V0_8_0 : uint8 {
    Point,
    Average,
    Min,
    Max,
};

