#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_ShapeType.generated.h"

UENUM(BlueprintType)
enum class ER5NPhys_ShapeType : uint8 {
    Point,
    Vector,
    Circle,
    Sphere,
    DirectedSphere,
    Cylinder,
    Ellipsoid,
    Hull,
    Box,
    Capsule,
    TaperedCapsule,
};

