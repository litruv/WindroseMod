#pragma once
#include "CoreMinimal.h"
#include "ER5ShipProximityStatus.generated.h"

UENUM(BlueprintType)
enum class ER5ShipProximityStatus : uint8 {
    None,
    Stored,
    DockedOrNearThePlayer,
    FarAway = 4,
};

