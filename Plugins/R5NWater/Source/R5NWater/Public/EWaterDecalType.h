#pragma once
#include "CoreMinimal.h"
#include "EWaterDecalType.generated.h"

UENUM(BlueprintType)
enum class EWaterDecalType : uint8 {
    DeformFoam,
    Color,
    Max,
};

