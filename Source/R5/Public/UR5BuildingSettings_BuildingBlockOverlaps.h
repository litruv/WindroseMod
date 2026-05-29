#pragma once
#include "CoreMinimal.h"
#include "UR5BuildingSettings_BuildingBlockOverlaps.generated.h"

UENUM(BlueprintType)
enum class UR5BuildingSettings_BuildingBlockOverlaps : uint8 {
    ByCentersEquality,
    ByPolyhedronInclusion,
    ByMultiplyPolyhedronsInclusion,
};

