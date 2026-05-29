#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioScriptUsageType.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioScriptUsageType : uint8 {
    Unknown,
    StartOnBeginPlay,
    ShareOnInteraction,
    WhileInteraction,
};

