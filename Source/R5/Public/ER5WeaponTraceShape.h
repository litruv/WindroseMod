#pragma once
#include "CoreMinimal.h"
#include "ER5WeaponTraceShape.generated.h"

UENUM(BlueprintType)
enum class ER5WeaponTraceShape : uint8 {
    Sphere,
    Box,
    Capsule,
};

