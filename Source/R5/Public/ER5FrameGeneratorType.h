#pragma once
#include "CoreMinimal.h"
#include "ER5FrameGeneratorType.generated.h"

UENUM(BlueprintType)
enum class ER5FrameGeneratorType : uint8 {
    Off,
    DLSS,
    FSR3,
};

