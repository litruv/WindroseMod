#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemClass.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryItemClass : uint8 {
    None,
    Default,
    Ammo,
    Equipment,
    Consumable,
};

