#pragma once
#include "CoreMinimal.h"
#include "ER5POIElementSpawnerLandingType.generated.h"

UENUM(BlueprintType)
enum class ER5POIElementSpawnerLandingType : uint8 {
    Landscape,
    TraceDownWoldSpace,
    TraceDownLocalSpace,
};

