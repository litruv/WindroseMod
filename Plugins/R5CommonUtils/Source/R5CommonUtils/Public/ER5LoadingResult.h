#pragma once
#include "CoreMinimal.h"
#include "ER5LoadingResult.generated.h"

UENUM(BlueprintType)
enum class ER5LoadingResult : uint8 {
    None,
    Loaded,
    Cancelled,
};

