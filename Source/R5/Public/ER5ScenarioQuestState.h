#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioQuestState.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioQuestState : uint8 {
    None,
    Absent,
    Active,
    ReadyToComplete = 4,
    Completed = 8,
    Updated = 128,
};

