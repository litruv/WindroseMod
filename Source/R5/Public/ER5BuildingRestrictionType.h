#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingRestrictionType.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingRestrictionType : uint8 {
    BuildingCenterRequirements,
    CanBuildBuildingCentersInBrush,
    MovableSupport,
    AllowedLocation,
    ConstructArea,
    CoastlineDistance,
    AmountLimit,
    Resources,
    Stability,
    Landscape,
    OverlapsActors,
    OverlapsPawns,
    MAX,
};

