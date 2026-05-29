#pragma once
#include "CoreMinimal.h"
#include "ER5SailsGear.generated.h"

UENUM(BlueprintType)
enum class ER5SailsGear : uint8 {
    Neutral,
    First,
    Second,
    Third = 4,
    Forth = 8,
    Reverse = 128,
};

