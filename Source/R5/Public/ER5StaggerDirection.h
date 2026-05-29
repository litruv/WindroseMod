#pragma once
#include "CoreMinimal.h"
#include "ER5StaggerDirection.generated.h"

UENUM(BlueprintType)
enum class ER5StaggerDirection : uint8 {
    NoDirection,
    Left,
    Right,
    Forward,
    Backward,
};

