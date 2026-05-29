#pragma once
#include "CoreMinimal.h"
#include "ER5BoardingTargetSelectionState.generated.h"

UENUM(BlueprintType)
enum class ER5BoardingTargetSelectionState : uint8 {
    NoTarget,
    Ok,
    AlreadyInBoarding,
    IncorrectAngle,
    TooFar,
    Dead,
    HasObstacles,
    NoFreeInterval,
    TooManyHP,
    TooHighRelativeVelocity,
};

