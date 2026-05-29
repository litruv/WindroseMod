#pragma once
#include "CoreMinimal.h"
#include "ER5ShipQuater.generated.h"

UENUM(BlueprintType)
enum class ER5ShipQuater : uint8 {
    StarboardBow,
    StarboardQuater,
    PortQuater,
    PortBow,
    Count,
};

