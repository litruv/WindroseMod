#pragma once
#include "CoreMinimal.h"
#include "ER5FoliageChannels.generated.h"

UENUM(BlueprintType)
enum class ER5FoliageChannels : uint8 {
    None = 0,
    FoliageChannel1 = 1,
    FoliageChannel2,
    FoliageChannel3 = 4,
    FoliageChannel4 = 8,
    Num = FoliageChannel3,
};

