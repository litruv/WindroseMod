#pragma once
#include "CoreMinimal.h"
#include "ER5WaitTargetDataServerMode.generated.h"

UENUM(BlueprintType)
enum class ER5WaitTargetDataServerMode : uint8 {
    Validate,
    Produce,
};

