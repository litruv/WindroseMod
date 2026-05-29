#pragma once
#include "CoreMinimal.h"
#include "ER5TargetQuestState.generated.h"

UENUM(BlueprintType)
enum class ER5TargetQuestState : uint8 {
    Active,
    Completed,
    Removed,
    ReadyToComplete,
};

