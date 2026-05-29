#pragma once
#include "CoreMinimal.h"
#include "ER5BLShipDockOperations.generated.h"

UENUM(BlueprintType)
enum class ER5BLShipDockOperations : uint8 {
    None,
    Equip,
    Repair,
    ManageStorage = 4,
    Craft = 8,
    Upgrade = 16,
};

