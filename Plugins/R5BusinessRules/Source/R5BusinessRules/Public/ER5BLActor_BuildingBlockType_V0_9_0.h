#pragma once
#include "CoreMinimal.h"
#include "ER5BLActor_BuildingBlockType_V0_9_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLActor_BuildingBlockType_V0_9_0 : uint8 {
    None,
    InventoryStorage,
    CraftStation,
    UpgradableActor,
    FarmingStation,
    SimpleActor,
    ActorWithState,
};

