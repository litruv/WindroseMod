#pragma once
#include "CoreMinimal.h"
#include "EWaterEmitterDestroyPolicy.generated.h"

UENUM(BlueprintType)
enum class EWaterEmitterDestroyPolicy : uint8 {
    Immediately,
    Complete,
};

