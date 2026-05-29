#pragma once
#include "CoreMinimal.h"
#include "ER5BLQuestFilterType.generated.h"

UENUM(BlueprintType)
enum class ER5BLQuestFilterType : uint8 {
    HasAll,
    HasAny,
};

