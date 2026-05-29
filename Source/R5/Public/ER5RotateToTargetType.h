#pragma once
#include "CoreMinimal.h"
#include "ER5RotateToTargetType.generated.h"

UENUM()
enum class ER5RotateToTargetType : int32 {
    UseAbilityRotation,
    FixedAngle,
    RotateToActor,
    RotateToLocation,
};

