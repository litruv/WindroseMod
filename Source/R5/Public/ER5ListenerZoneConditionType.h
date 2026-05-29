#pragma once
#include "CoreMinimal.h"
#include "ER5ListenerZoneConditionType.generated.h"

UENUM(BlueprintType)
enum class ER5ListenerZoneConditionType : uint8 {
    DistanceToZone,
    InsideBoxCollisionZone,
    InsideSphereCollisionZone,
};

