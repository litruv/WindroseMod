#pragma once
#include "CoreMinimal.h"
#include "ER5MaxWidthHandling.generated.h"

UENUM(BlueprintType)
enum class ER5MaxWidthHandling : uint8 {
    Scale,
    WrapAndScale,
};

