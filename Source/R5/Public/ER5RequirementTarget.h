#pragma once
#include "CoreMinimal.h"
#include "ER5RequirementTarget.generated.h"

UENUM(BlueprintType)
enum class ER5RequirementTarget : uint8 {
    CurrentTarget,
    OwnerTarget,
};

