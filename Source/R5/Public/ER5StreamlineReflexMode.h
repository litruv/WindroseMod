#pragma once
#include "CoreMinimal.h"
#include "ER5StreamlineReflexMode.generated.h"

UENUM(BlueprintType)
enum class ER5StreamlineReflexMode : uint8 {
    Off,
    Enabled,
    Boost = 3,
};

