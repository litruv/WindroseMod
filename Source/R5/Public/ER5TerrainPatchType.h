#pragma once
#include "CoreMinimal.h"
#include "ER5TerrainPatchType.generated.h"

UENUM(BlueprintType)
enum class ER5TerrainPatchType : uint8 {
    Undefined,
    DiggingDown,
    DiggingUp,
    Flattening,
    Explosion,
};

