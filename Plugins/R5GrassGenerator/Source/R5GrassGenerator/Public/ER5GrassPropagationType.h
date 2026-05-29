#pragma once
#include "CoreMinimal.h"
#include "ER5GrassPropagationType.generated.h"

UENUM(BlueprintType)
enum class ER5GrassPropagationType : uint8 {
    Ignore,
    Inner,
    Outer,
};

