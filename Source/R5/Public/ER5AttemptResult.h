#pragma once
#include "CoreMinimal.h"
#include "ER5AttemptResult.generated.h"

UENUM(BlueprintType)
enum class ER5AttemptResult : uint8 {
    Success,
    Failure,
};

