#pragma once
#include "CoreMinimal.h"
#include "ER5NK_FractalType.generated.h"

UENUM(BlueprintType)
enum class ER5NK_FractalType : uint8 {
    fBm,
    Ridges,
    Billow,
};

