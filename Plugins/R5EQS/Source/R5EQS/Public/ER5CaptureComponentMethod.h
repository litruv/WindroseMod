#pragma once
#include "CoreMinimal.h"
#include "ER5CaptureComponentMethod.generated.h"

UENUM(BlueprintType)
enum class ER5CaptureComponentMethod : uint8 {
    OnlyLocation,
    OnlyRotation,
    LocationAndRotation,
};

