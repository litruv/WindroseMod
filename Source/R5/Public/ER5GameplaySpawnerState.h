#pragma once
#include "CoreMinimal.h"
#include "ER5GameplaySpawnerState.generated.h"

UENUM(BlueprintType)
enum class ER5GameplaySpawnerState : uint8 {
    Purged,
    SpawnInProgress,
    Idle,
    Suspended,
    WaitingBL,
};

