#pragma once
#include "CoreMinimal.h"
#include "ER5BLCharacterBodyPartType_V0_8_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLCharacterBodyPartType_V0_8_0 : uint8 {
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

