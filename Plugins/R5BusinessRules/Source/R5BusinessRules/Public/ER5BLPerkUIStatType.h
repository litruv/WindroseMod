#pragma once
#include "CoreMinimal.h"
#include "ER5BLPerkUIStatType.generated.h"

UENUM(BlueprintType)
enum class ER5BLPerkUIStatType : uint8 {
    None,
    Default,
    RatioToPercent,
    ValueToPercent,
    ValueAsValue,
    SecondsAsMinutes,
};

