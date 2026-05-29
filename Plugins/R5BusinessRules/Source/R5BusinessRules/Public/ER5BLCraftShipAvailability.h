#pragma once
#include "CoreMinimal.h"
#include "ER5BLCraftShipAvailability.generated.h"

UENUM(BlueprintType)
enum class ER5BLCraftShipAvailability : uint8 {
    Unavailable,
    NotEnoughResources,
    NotEnoughCraftComfort,
    Available,
    NotDiscovered,
};

