#pragma once
#include "CoreMinimal.h"
#include "ER5BLBuildingBlockRequirement.generated.h"

UENUM(BlueprintType)
enum class ER5BLBuildingBlockRequirement : uint8 {
    None,
    Prebuilt,
    Supported,
    Unsupported,
};

