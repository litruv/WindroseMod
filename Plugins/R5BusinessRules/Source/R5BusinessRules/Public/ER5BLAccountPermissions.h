#pragma once
#include "CoreMinimal.h"
#include "ER5BLAccountPermissions.generated.h"

UENUM(BlueprintType)
enum class ER5BLAccountPermissions : uint8 {
    Game,
    Admin,
};

