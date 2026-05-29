#pragma once
#include "CoreMinimal.h"
#include "ER5AnimBlockState.generated.h"

UENUM(BlueprintType)
enum class ER5AnimBlockState : uint8 {
    None,
    Active,
    Finishing,
};

