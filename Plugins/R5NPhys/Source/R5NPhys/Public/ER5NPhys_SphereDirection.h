#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_SphereDirection.generated.h"

UENUM(BlueprintType)
enum class ER5NPhys_SphereDirection : uint8 {
    AlongTheDirection,
    PerpendicularToTheDirection,
    HalfOfPerpendicularsToTheDirection,
    EqualToAnyDirection,
};

