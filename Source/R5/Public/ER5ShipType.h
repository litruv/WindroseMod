#pragma once
#include "CoreMinimal.h"
#include "ER5ShipType.generated.h"

UENUM(BlueprintType)
enum class ER5ShipType : uint8 {
    None,
    Boat,
    Cutter,
    Merchant,
    Ketch,
    Brig,
    Frigate,
    Galleon,
    Royal,
};

