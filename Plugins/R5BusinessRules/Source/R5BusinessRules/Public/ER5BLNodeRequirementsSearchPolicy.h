#pragma once
#include "CoreMinimal.h"
#include "ER5BLNodeRequirementsSearchPolicy.generated.h"

UENUM(BlueprintType)
enum class ER5BLNodeRequirementsSearchPolicy : uint8 {
    AtLeastOne,
    All,
};

