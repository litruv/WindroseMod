#pragma once
#include "CoreMinimal.h"
#include "ER5BLModifyItemAttributePolicy_V0_8_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLModifyItemAttributePolicy_V0_8_0 : uint8 {
    Override,
    Add,
    Multiply,
    Remove,
};

