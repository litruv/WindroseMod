#pragma once
#include "CoreMinimal.h"
#include "ER5BobberMovementState.generated.h"

UENUM(BlueprintType)
enum class ER5BobberMovementState : uint8 {
    None,
    Launch,
    InWater,
    PullOut,
    OutOfDistance,
};

