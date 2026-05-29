#pragma once
#include "CoreMinimal.h"
#include "ER5AlignDirection_VX_X_X.generated.h"

UENUM(BlueprintType)
enum class ER5AlignDirection_VX_X_X : uint8 {
    NoAlignment,
    AlignToNormal,
    AlignToWater,
    AlignToBiome,
    AlignToNormalAndWater,
};

