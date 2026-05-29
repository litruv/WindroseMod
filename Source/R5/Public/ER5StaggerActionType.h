#pragma once
#include "CoreMinimal.h"
#include "ER5StaggerActionType.generated.h"

UENUM(BlueprintType)
enum class ER5StaggerActionType : uint8 {
    HitReaction,
    Stagger,
    HeavyStagger,
    Launch,
};

