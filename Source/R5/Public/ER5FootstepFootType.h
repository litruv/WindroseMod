#pragma once
#include "CoreMinimal.h"
#include "ER5FootstepFootType.generated.h"

UENUM(BlueprintType)
enum class ER5FootstepFootType : uint8 {
    Left,
    Right,
    LeftBack,
    RightBack,
    Root,
    MAX,
};

