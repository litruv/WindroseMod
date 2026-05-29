#pragma once
#include "CoreMinimal.h"
#include "ER5InventoriesGroupType.generated.h"

UENUM(BlueprintType)
enum class ER5InventoriesGroupType : uint8 {
    None,
    Player,
    InteractionTarget,
    Proximity = 4,
    OverridenTarget = 8,
};

