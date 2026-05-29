#pragma once
#include "CoreMinimal.h"
#include "ER5InteractAcquireMode.generated.h"

UENUM(BlueprintType)
enum class ER5InteractAcquireMode : uint8 {
    Trace,
    Overlap,
};

