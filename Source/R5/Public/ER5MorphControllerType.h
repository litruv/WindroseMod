#pragma once
#include "CoreMinimal.h"
#include "ER5MorphControllerType.generated.h"

UENUM(BlueprintType)
enum class ER5MorphControllerType : uint8 {
    None,
    Axis1,
    Axis2,
    Axis3,
    Axis4,
};

