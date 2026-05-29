#pragma once
#include "CoreMinimal.h"
#include "ER5FollowingProjectileMovementState.generated.h"

UENUM(BlueprintType)
enum class ER5FollowingProjectileMovementState : uint8 {
    None,
    Launch,
    FlyToTarget,
    FlyForward,
};

