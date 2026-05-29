#pragma once
#include "CoreMinimal.h"
#include "ER5DoorState.generated.h"

UENUM(BlueprintType)
enum class ER5DoorState : uint8 {
    Closed,
    OpenedInside,
    OpenedOutside,
};

