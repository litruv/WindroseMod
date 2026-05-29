#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryOperations.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryOperations : uint8 {
    None,
    Add,
    Move,
    Remove = 4,
};

