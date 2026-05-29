#pragma once
#include "CoreMinimal.h"
#include "ER5CommonCompositionRequirementDescType.generated.h"

UENUM(BlueprintType)
enum class ER5CommonCompositionRequirementDescType : uint8 {
    DefaultDescription,
    FirstFailDescription,
};

