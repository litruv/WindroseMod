#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingBlockState.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingBlockState : uint8 {
    None = 0,
    Prebuild = 1,
    JustBuiltByPlayer,
    Unstable = 4,
    Supported = 8,
    Destructible = 16,
    SelectedByPlayer = 32,
};

