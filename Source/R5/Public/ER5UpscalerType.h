#pragma once
#include "CoreMinimal.h"
#include "ER5UpscalerType.generated.h"

UENUM(BlueprintType)
enum class ER5UpscalerType : uint8 {
    TSR,
    DLSS,
    FSR3,
};

