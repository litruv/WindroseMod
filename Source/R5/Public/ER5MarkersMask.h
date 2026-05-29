#pragma once
#include "CoreMinimal.h"
#include "ER5MarkersMask.generated.h"

UENUM(BlueprintType)
enum class ER5MarkersMask : uint8 {
    None,
    MapMarker,
    MinimapMarker,
    WorldMarker = 4,
};

