#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingAbilitySnappingMode.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingAbilitySnappingMode : uint8 {
    None,
    EdgeInViewport,
    PositionInWorld,
};

