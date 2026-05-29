#pragma once
#include "CoreMinimal.h"
#include "ER5FoliageObjectType.generated.h"

UENUM(BlueprintType)
enum class ER5FoliageObjectType : uint8 {
    PointOfInterest,
    Foliage,
    Spawner,
    Num,
};

