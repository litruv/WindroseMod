#pragma once
#include "CoreMinimal.h"
#include "ER5ConnectionRegionState.generated.h"

UENUM(BlueprintType)
enum class ER5ConnectionRegionState : uint8 {
    None,
    Available,
    Unavailable,
};

