#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioGraphNodeType.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioGraphNodeType : uint8 {
    Condition,
    Task,
    Dialog,
    SubGraph,
    Listener,
};

