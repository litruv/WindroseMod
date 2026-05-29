#pragma once
#include "CoreMinimal.h"
#include "ER5BLItemRarity.generated.h"

UENUM(BlueprintType)
enum class ER5BLItemRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

