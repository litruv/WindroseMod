#pragma once
#include "CoreMinimal.h"
#include "ER5NWeatherLocalWeatherType.generated.h"

UENUM(BlueprintType)
enum class ER5NWeatherLocalWeatherType : uint8 {
    None,
    Circle,
    Tag,
    Max,
};

