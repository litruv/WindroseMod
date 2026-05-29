#pragma once
#include "CoreMinimal.h"
#include "UR5BuildingSettings_UnsnappedTargetAlignType.generated.h"

UENUM(BlueprintType)
enum class UR5BuildingSettings_UnsnappedTargetAlignType : uint8 {
    None,
    ToCollision,
    ToPolyhedron,
};

