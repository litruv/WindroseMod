#pragma once
#include "CoreMinimal.h"
#include "ER5BatteryEnhancementStatus.generated.h"

UENUM(BlueprintType)
enum class ER5BatteryEnhancementStatus : uint8 {
    None,
    Temporary,
    Persistent,
};

