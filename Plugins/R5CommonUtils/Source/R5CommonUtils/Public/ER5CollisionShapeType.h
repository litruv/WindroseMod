#pragma once
#include "CoreMinimal.h"
#include "ER5CollisionShapeType.generated.h"

UENUM(BlueprintType)
enum class ER5CollisionShapeType : uint8 {
    Line,
    Box,
    Sphere,
    Capsule,
};

