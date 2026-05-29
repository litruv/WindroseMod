#pragma once
#include "CoreMinimal.h"
#include "ER5BLAddItemModifier.generated.h"

UENUM(BlueprintType)
enum class ER5BLAddItemModifier : uint8 {
    Default,
    OnlyEmptySlots,
    OnlyNotFullSlots,
    TheSameItemTag,
};

