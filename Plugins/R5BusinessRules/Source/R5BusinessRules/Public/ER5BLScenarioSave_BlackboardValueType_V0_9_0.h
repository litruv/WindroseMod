#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenarioSave_BlackboardValueType_V0_9_0.generated.h"

UENUM(BlueprintType)
enum class ER5BLScenarioSave_BlackboardValueType_V0_9_0 : uint8 {
    Bool,
    Integer,
    Float,
    Time,
    Name,
    Tag,
    String,
    Object,
};

