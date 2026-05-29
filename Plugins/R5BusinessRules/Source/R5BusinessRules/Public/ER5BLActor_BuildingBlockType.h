#pragma once
#include "CoreMinimal.h"
#include "ER5BLActor_BuildingBlockType.generated.h"

UENUM(BlueprintType)
enum class ER5BLActor_BuildingBlockType : uint8 {
    None,
    InventoryStorage,
    CraftStation,
    UpgradableActor,
    FarmingStation,
    SimpleActor,
    ActorWithState,
};

