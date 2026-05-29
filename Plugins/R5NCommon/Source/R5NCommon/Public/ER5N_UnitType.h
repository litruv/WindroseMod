#pragma once
#include "CoreMinimal.h"
#include "ER5N_UnitType.generated.h"

UENUM(BlueprintType)
enum class ER5N_UnitType : uint8 {
    Length,
    Square,
    Angle,
    Mass,
    Density,
    Speed,
    Force,
    Undefined,
};

