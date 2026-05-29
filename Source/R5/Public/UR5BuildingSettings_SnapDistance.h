#pragma once
#include "CoreMinimal.h"
#include "UR5BuildingSettings_SnapDistance.generated.h"

UENUM(BlueprintType)
enum class UR5BuildingSettings_SnapDistance : uint8 {
    ScreenSpace,
    WorldSpace,
    FromCameraForwardRay,
};

