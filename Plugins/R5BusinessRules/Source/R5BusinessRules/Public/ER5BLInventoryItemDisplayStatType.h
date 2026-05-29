#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemDisplayStatType.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryItemDisplayStatType : uint8 {
    None,
    Default,
    RatioToPercent,
    ValueToPercent,
    ValueAsValue,
    SecondsAsMinutes,
};

