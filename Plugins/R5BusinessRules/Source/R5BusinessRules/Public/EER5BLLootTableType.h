#pragma once
#include "CoreMinimal.h"
#include "EER5BLLootTableType.generated.h"

UENUM(BlueprintType)
enum class EER5BLLootTableType : uint8 {
    Weight,
    List,
    Ordered,
    WeightedOnetime,
};

