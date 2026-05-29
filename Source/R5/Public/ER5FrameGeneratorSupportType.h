#pragma once
#include "CoreMinimal.h"
#include "ER5FrameGeneratorSupportType.generated.h"

UENUM(BlueprintType)
enum class ER5FrameGeneratorSupportType : uint8 {
    NotSupported,
    RequiresHWAcceleratedScheduling,
    Supported,
};

