#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingConstructTargetSimplifiedPreviewState.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingConstructTargetSimplifiedPreviewState : uint8 {
    Blocked,
    Obscured,
    Valid,
};

