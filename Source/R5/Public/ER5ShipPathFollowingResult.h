#pragma once
#include "CoreMinimal.h"
#include "ER5ShipPathFollowingResult.generated.h"

UENUM(BlueprintType)
enum class ER5ShipPathFollowingResult : uint8 {
    Success,
    Blocked,
    OffPath,
    Aborted,
    InProgress,
};

