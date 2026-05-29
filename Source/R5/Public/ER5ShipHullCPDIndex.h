#pragma once
#include "CoreMinimal.h"
#include "ER5ShipHullCPDIndex.generated.h"

UENUM(BlueprintType)
enum class ER5ShipHullCPDIndex : uint8 {
    None = 0,
    HullColor01 = 13,
    HullColor02,
    HullColor03,
    HullColorBase,
    HullDecor,
    HullDecorColor,
    HullUnderwaterColor,
};

