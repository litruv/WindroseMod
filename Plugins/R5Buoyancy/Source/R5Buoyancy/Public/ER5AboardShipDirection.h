#pragma once
#include "CoreMinimal.h"
#include "ER5AboardShipDirection.generated.h"

UENUM(BlueprintType)
enum class ER5AboardShipDirection : uint8 {
    Bow,
    StarboardBow,
    StarboardBeam,
    StarboardQuater,
    Stern,
    PortQuater,
    PortBeam,
    PortBow,
    Count,
};

