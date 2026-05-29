#pragma once
#include "CoreMinimal.h"
#include "ER5EncounterStateStep.generated.h"

UENUM()
enum class ER5EncounterStateStep : int32 {
    Requirement,
    Action,
};

