#pragma once
#include "CoreMinimal.h"
#include "ER5ContextualSpawnerPlaceType.generated.h"

UENUM(BlueprintType)
enum class ER5ContextualSpawnerPlaceType : uint8 {
    Landscape,
    Water,
    SpawnPoint,
};

