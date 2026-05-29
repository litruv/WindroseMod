#pragma once
#include "CoreMinimal.h"
#include "ER5OperationType.generated.h"

UENUM(BlueprintType)
enum class ER5OperationType : uint8 {
    Consume,
    Equip,
};

