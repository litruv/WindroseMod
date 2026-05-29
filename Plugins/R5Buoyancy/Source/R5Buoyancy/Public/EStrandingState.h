#pragma once
#include "CoreMinimal.h"
#include "EStrandingState.generated.h"

UENUM(BlueprintType)
enum class EStrandingState : uint8 {
    Free,
    IsRunningAground,
    Stuck,
    IsGettingOffTheGround,
};

