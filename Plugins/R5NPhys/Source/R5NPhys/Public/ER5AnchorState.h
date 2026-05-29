#pragma once
#include "CoreMinimal.h"
#include "ER5AnchorState.generated.h"

UENUM(BlueprintType)
enum class ER5AnchorState : uint8 {
    Any,
    Dropped,
    Raised,
};

