#pragma once
#include "CoreMinimal.h"
#include "ER5GenericTabState.generated.h"

UENUM(BlueprintType)
enum class ER5GenericTabState : uint8 {
    Idle,
    Active,
    Disabled,
};

