#pragma once
#include "CoreMinimal.h"
#include "ER5CheckResult.generated.h"

UENUM(BlueprintType)
enum class ER5CheckResult : uint8 {
    Successful,
    Failed,
};

