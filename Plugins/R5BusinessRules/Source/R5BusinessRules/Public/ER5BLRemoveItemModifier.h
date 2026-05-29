#pragma once
#include "CoreMinimal.h"
#include "ER5BLRemoveItemModifier.generated.h"

UENUM(BlueprintType)
enum class ER5BLRemoveItemModifier : uint8 {
    Default,
    OnlyFullSlots,
    OnlyNotFullSlots,
};

