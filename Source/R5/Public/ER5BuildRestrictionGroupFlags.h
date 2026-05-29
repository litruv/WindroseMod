#pragma once
#include "CoreMinimal.h"
#include "ER5BuildRestrictionGroupFlags.generated.h"

UENUM(BlueprintType)
enum class ER5BuildRestrictionGroupFlags : uint8 {
    None,
    Common,
    Position,
    Placement_HitsAndOverlaps = 4,
    Stability = 8,
    Full = 15,
    Fast = 3,
};

