#pragma once
#include "CoreMinimal.h"
#include "ER5FlagCPDIndex.generated.h"

UENUM(BlueprintType)
enum class ER5FlagCPDIndex : uint8 {
    None = 0,
    FlagBaseColor = 13,
    FlagDecor,
    FlagDecorColor01,
    FlagDecorColor02,
    FlagDecorColor03,
    FlagTearing,
    FlagShape,
    RandomSeed = 31,
};

