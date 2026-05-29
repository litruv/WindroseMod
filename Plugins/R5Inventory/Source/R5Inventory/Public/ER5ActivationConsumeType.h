#pragma once
#include "CoreMinimal.h"
#include "ER5ActivationConsumeType.generated.h"

UENUM(BlueprintType)
enum class ER5ActivationConsumeType : uint8 {
    SpendItems,
    SpendAttributes,
    AutoSpendAttributes,
};

