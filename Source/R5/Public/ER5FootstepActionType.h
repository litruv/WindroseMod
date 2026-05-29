#pragma once
#include "CoreMinimal.h"
#include "ER5FootstepActionType.generated.h"

UENUM(BlueprintType)
enum class ER5FootstepActionType : uint8 {
    Walk,
    Run,
    Sprint,
    Crouch,
    Dash,
    Jump,
    Landing,
    LandingAction,
    MAX,
};

