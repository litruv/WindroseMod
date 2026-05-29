#pragma once
#include "CoreMinimal.h"
#include "ER5GamepadCursorMode.generated.h"

UENUM(BlueprintType)
enum class ER5GamepadCursorMode : uint8 {
    Disabled,
    Cursor,
    Grid,
};

