#pragma once
#include "CoreMinimal.h"
#include "ER5GamepadAccelerationType.generated.h"

UENUM(BlueprintType)
enum class ER5GamepadAccelerationType : uint8 {
    Cubic,
    Linear,
    Curve,
};

