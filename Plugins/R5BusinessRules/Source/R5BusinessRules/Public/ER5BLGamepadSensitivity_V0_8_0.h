#pragma once
#include "CoreMinimal.h"
#include "ER5BLGamepadSensitivity_V0_8_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLGamepadSensitivity_V0_8_0 : uint8 {
    Invalid,
    Slow,
    SlowPlus,
    SlowPlusPlus,
    Normal,
    NormalPlus,
    NormalPlusPlus,
    Fast,
    FastPlus,
    FastPlusPlus,
    Insane,
    MAX,
};

