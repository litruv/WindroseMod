#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingConstructDirection.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingConstructDirection : uint8 {
    Undefined,
    ForwardBackward,
    RightLeft,
    UpDown = 4,
};

