#pragma once
#include "CoreMinimal.h"
#include "ER5EncounterActionStatus.generated.h"

UENUM(BlueprintType)
enum class ER5EncounterActionStatus : uint8 {
    None = 0,
    Idle = 1,
    InProgress,
    Success = 4,
    Decline = 8,
};

