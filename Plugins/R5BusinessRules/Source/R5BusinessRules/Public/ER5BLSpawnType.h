#pragma once
#include "CoreMinimal.h"
#include "ER5BLSpawnType.generated.h"

UENUM(BlueprintType)
enum class ER5BLSpawnType : uint8 {
    SpawnPoint,
    AsCharacter,
    AsShip,
    PreVoyage,
    PostVoyage,
};

