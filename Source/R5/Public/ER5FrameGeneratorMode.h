#pragma once
#include "CoreMinimal.h"
#include "ER5FrameGeneratorMode.generated.h"

UENUM(BlueprintType)
enum class ER5FrameGeneratorMode : uint8 {
    Auto,
    On2x,
    On3x,
    On4x,
};

