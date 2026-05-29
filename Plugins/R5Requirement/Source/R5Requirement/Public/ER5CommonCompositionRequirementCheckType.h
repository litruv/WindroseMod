#pragma once
#include "CoreMinimal.h"
#include "ER5CommonCompositionRequirementCheckType.generated.h"

UENUM(BlueprintType)
enum class ER5CommonCompositionRequirementCheckType : uint8 {
    All,
    Any,
    Not,
};

