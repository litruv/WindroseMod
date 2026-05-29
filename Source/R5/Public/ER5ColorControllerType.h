#pragma once
#include "CoreMinimal.h"
#include "ER5ColorControllerType.generated.h"

UENUM(BlueprintType)
enum class ER5ColorControllerType : uint8 {
    None,
    WithDefaultColor,
    WithoutDefaultColor,
};

