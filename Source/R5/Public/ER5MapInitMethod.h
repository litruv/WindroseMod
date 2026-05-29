#pragma once
#include "CoreMinimal.h"
#include "ER5MapInitMethod.generated.h"

UENUM(BlueprintType)
enum class ER5MapInitMethod : uint8 {
    None,
    MapBound,
    TerrainGenerator,
};

