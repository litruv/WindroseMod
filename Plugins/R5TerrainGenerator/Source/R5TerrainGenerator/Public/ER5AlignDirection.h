#pragma once
#include "CoreMinimal.h"
#include "ER5AlignDirection.generated.h"

UENUM(BlueprintType)
enum class ER5AlignDirection : uint8 {
    NoAlignment,
    AlignToNormal,
    AlignToWater,
    AlignToBiome,
    AlignToNormalAndWater,
};

