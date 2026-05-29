#pragma once
#include "CoreMinimal.h"
#include "ER5RevivePositionType.generated.h"

UENUM(BlueprintType)
enum class ER5RevivePositionType : uint8 {
    DeathPosition,
    PlayerStart,
    RespawnPoint,
    Default,
};

