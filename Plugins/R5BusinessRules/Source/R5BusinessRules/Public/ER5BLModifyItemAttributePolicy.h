#pragma once
#include "CoreMinimal.h"
#include "ER5BLModifyItemAttributePolicy.generated.h"

UENUM(BlueprintType)
enum class ER5BLModifyItemAttributePolicy : uint8 {
    Override,
    Add,
    Multiply,
    Remove,
};

