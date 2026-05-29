#pragma once
#include "CoreMinimal.h"
#include "ER5BLSpawnType_V0_8_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLSpawnType_V0_8_0 : uint8 {
    SpawnPoint,
    AsCharacter,
    AsShip,
    PreVoyage,
    PostVoyage,
};

