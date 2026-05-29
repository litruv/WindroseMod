#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingAmountLimitType.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingAmountLimitType : uint8 {
    Total,
    Player,
};

