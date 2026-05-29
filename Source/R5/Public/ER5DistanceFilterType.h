#pragma once
#include "CoreMinimal.h"
#include "ER5DistanceFilterType.generated.h"

UENUM()
enum class ER5DistanceFilterType : int32 {
    Minimum,
    Maximum,
    Range,
};

