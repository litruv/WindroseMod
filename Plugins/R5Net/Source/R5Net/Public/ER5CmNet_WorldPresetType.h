#pragma once
#include "CoreMinimal.h"
#include "ER5CmNet_WorldPresetType.generated.h"

UENUM(BlueprintType)
enum class ER5CmNet_WorldPresetType : uint8 {
    Easy,
    Medium,
    Hard,
    Custom,
};

