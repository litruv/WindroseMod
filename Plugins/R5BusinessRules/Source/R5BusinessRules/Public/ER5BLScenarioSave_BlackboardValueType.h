#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenarioSave_BlackboardValueType.generated.h"

UENUM(BlueprintType)
enum class ER5BLScenarioSave_BlackboardValueType : uint8 {
    Bool,
    Integer,
    Float,
    Time,
    Name,
    Tag,
    String,
    Object,
};

