#pragma once
#include "CoreMinimal.h"
#include "ER5StoreShipAvailability.generated.h"

UENUM(BlueprintType)
enum class ER5StoreShipAvailability : uint8 {
    Available,
    HasPlayersOnBoard,
    ShipInBoardingBattle,
    NotDeployed,
    OtherRestrictions,
};

