#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryActionType.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryActionType : uint8 {
    FastMoveClick,
    ActivationClick,
    Death,
};

