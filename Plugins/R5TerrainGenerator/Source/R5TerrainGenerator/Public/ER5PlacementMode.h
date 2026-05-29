#pragma once
#include "CoreMinimal.h"
#include "ER5PlacementMode.generated.h"

UENUM(BlueprintType)
enum class ER5PlacementMode : uint8 {
    Point,
    Average,
    Min,
    Max,
};

