#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenario_OwnerType.generated.h"

UENUM(BlueprintType)
enum class ER5BLScenario_OwnerType : uint8 {
    Account,
    Player,
    PlayerInWorld,
    PersistentIslandActor,
    TransientIslandActor,
    Island,
    PlayerShip,
    Actor_BuildingBlock,
};

