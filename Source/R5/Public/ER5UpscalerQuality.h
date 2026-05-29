#pragma once
#include "CoreMinimal.h"
#include "ER5UpscalerQuality.generated.h"

UENUM(BlueprintType)
enum class ER5UpscalerQuality : uint8 {
    Auto,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
    Native,
    DLAA,
    Custom,
};

