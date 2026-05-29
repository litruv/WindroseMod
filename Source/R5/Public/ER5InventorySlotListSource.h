#pragma once
#include "CoreMinimal.h"
#include "ER5InventorySlotListSource.generated.h"

UENUM(BlueprintType)
enum class ER5InventorySlotListSource : uint8 {
    None,
    Player,
    PlayerInteractTarget,
    ControlledPawn,
    ControlledPawnInteractTarget,
    Flagship,
    OverridenTarget,
    PersonalInventory,
};

