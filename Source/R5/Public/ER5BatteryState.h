#pragma once
#include "CoreMinimal.h"
#include "ER5BatteryState.generated.h"

UENUM(BlueprintType)
enum class ER5BatteryState : uint8 {
    Idle,
    PrepareToShoot,
};

