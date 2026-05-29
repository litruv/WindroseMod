#pragma once
#include "CoreMinimal.h"
#include "ER5DamageRandomMode.generated.h"

UENUM(BlueprintType)
enum class ER5DamageRandomMode : uint8 {
    Default,
    Min,
    Max,
    Ave,
};

