#pragma once
#include "CoreMinimal.h"
#include "ER5TerraformToolOverlapShape.generated.h"

UENUM(BlueprintType)
enum class ER5TerraformToolOverlapShape : uint8 {
    Sphere,
    Capsule,
    Box,
};

