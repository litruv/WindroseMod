#pragma once
#include "CoreMinimal.h"
#include "EMovementState.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8 {
    MapPlaceHolder,
    Standing,
    Running,
    Sprinting = 4,
    Falling = 8,
    Walking = 16,
    Swimming = 32,
    FastSwimming = 64,
    OverweightSprint = 128,
};

