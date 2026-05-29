#pragma once
#include "CoreMinimal.h"
#include "ER5PlacementMode_VX_X_X.generated.h"

UENUM(BlueprintType)
enum class ER5PlacementMode_VX_X_X : uint8 {
    Point,
    Average,
    Min,
    Max,
};

