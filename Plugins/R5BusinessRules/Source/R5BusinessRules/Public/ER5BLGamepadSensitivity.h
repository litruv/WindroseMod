#pragma once
#include "CoreMinimal.h"
#include "ER5BLGamepadSensitivity.generated.h"

UENUM(BlueprintType)
enum class ER5BLGamepadSensitivity : uint8 {
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

