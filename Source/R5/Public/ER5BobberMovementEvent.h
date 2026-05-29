#pragma once
#include "CoreMinimal.h"
#include "ER5BobberMovementEvent.generated.h"

UENUM(BlueprintType)
enum class ER5BobberMovementEvent : uint8 {
    CatchReady,
    Returned,
};

