#pragma once
#include "CoreMinimal.h"
#include "ESteeringState.generated.h"

UENUM(BlueprintType)
enum class ESteeringState : uint8 {
    Idle,
    MoveLeft,
    MoveRight,
    IdleLeft,
    IdleRight,
};

