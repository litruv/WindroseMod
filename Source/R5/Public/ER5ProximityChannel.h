#pragma once
#include "CoreMinimal.h"
#include "ER5ProximityChannel.generated.h"

UENUM(BlueprintType)
enum class ER5ProximityChannel : uint8 {
    PlayerToShip,
    DockToShip,
    ShipToDock,
};

