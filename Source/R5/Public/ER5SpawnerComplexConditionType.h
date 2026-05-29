#pragma once
#include "CoreMinimal.h"
#include "ER5SpawnerComplexConditionType.generated.h"

UENUM(BlueprintType)
enum class ER5SpawnerComplexConditionType : uint8 {
    All,
    Any,
    None,
};

