#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingOnLandscapeRule.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingOnLandscapeRule : uint8 {
    None,
    LandscapeRequired,
    LandscapeProhibited,
};

