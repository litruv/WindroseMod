#pragma once
#include "CoreMinimal.h"
#include "ER5GameplaySpawnerHeightModifier.generated.h"

UENUM(BlueprintType)
enum class ER5GameplaySpawnerHeightModifier : uint8 {
    None,
    Landscape,
    Water,
    TraceDown = 4,
};

