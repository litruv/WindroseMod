#pragma once
#include "CoreMinimal.h"
#include "EAutoPickLootMode.generated.h"

UENUM(BlueprintType)
enum class EAutoPickLootMode : uint8 {
    Standard,
    Smart,
    Disabled,
};

