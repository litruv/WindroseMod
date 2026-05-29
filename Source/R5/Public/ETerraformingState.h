#pragma once
#include "CoreMinimal.h"
#include "ETerraformingState.generated.h"

UENUM(BlueprintType)
enum class ETerraformingState : uint8 {
    Inactive,
    Active,
    Blocked,
};

