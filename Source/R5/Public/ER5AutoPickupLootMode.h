#pragma once
#include "CoreMinimal.h"
#include "ER5AutoPickupLootMode.generated.h"

UENUM(BlueprintType)
enum class ER5AutoPickupLootMode : uint8 {
    None,
    Standard,
    Smart,
};

