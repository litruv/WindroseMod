#pragma once
#include "CoreMinimal.h"
#include "ER5FindItemListenerPolicy.generated.h"

UENUM(BlueprintType)
enum class ER5FindItemListenerPolicy : uint8 {
    ContainedInInventory,
    WasTouched,
};

