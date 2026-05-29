#pragma once
#include "CoreMinimal.h"
#include "ER5BLScenarioSave_BlackboardType.generated.h"

UENUM(BlueprintType)
enum class ER5BLScenarioSave_BlackboardType : uint8 {
    None,
    Persistant,
    Transient,
};

