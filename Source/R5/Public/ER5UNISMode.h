#pragma once
#include "CoreMinimal.h"
#include "ER5UNISMode.generated.h"

UENUM(BlueprintType)
enum class ER5UNISMode : uint8 {
    Off,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    Custom,
};

