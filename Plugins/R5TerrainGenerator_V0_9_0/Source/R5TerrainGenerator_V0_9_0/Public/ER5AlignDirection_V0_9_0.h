#pragma once
#include "CoreMinimal.h"
#include "ER5AlignDirection_V0_9_0.generated.h"

UENUM(BlueprintType)
enum class ER5AlignDirection_V0_9_0 : uint8 {
    NoAlignment,
    AlignToNormal,
    AlignToWater,
    AlignToBiome,
    AlignToNormalAndWater,
};

