#pragma once
#include "CoreMinimal.h"
#include "ER5InputType.generated.h"

UENUM(BlueprintType)
enum class ER5InputType : uint8 {
    KeyboardMouse,
    Gamepad,
};

