#pragma once
#include "CoreMinimal.h"
#include "ER5RestBuffState.generated.h"

UENUM(BlueprintType)
enum class ER5RestBuffState : uint8 {
    None,
    RestArea,
    Resting,
    Rested,
    RestingWhileRested,
};

