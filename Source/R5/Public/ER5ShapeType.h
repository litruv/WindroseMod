#pragma once
#include "CoreMinimal.h"
#include "ER5ShapeType.generated.h"

UENUM(BlueprintType)
enum class ER5ShapeType : uint8 {
    Sphere,
    Box,
    Capsule,
};

