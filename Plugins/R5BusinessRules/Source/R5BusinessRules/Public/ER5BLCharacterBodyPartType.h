#pragma once
#include "CoreMinimal.h"
#include "ER5BLCharacterBodyPartType.generated.h"

UENUM(BlueprintType)
enum class ER5BLCharacterBodyPartType : uint8 {
    Face,
    Head,
    Chest,
    Back,
    ShoulderRight,
    ForearmRight,
    ShoulderLeft,
    ForearmLeft,
    LegLeft,
    LegRight,
    Eyeliner,
    Lips,
    Cheecks,
    Cursemark,
    None = 255,
};

