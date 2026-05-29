#pragma once
#include "CoreMinimal.h"
#include "ER5BLDisassembleShipAvailability.generated.h"

UENUM(BlueprintType)
enum class ER5BLDisassembleShipAvailability : uint8 {
    Available,
    InventoryIsFull,
    ShipInventoryIsNotEmpty,
    ShipIsFarAway,
    Unavailable,
};

