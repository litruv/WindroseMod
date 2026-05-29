#pragma once
#include "CoreMinimal.h"
#include "EWaterEmitterBlendingType.generated.h"

UENUM(BlueprintType)
enum class EWaterEmitterBlendingType : uint8 {
    Blended,
    Additive,
    Max,
};

