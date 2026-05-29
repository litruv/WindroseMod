#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryPermission.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryPermission : uint8 {
    Personal,
    Shared,
};

