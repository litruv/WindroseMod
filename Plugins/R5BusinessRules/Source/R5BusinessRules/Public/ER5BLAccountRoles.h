#pragma once
#include "CoreMinimal.h"
#include "ER5BLAccountRoles.generated.h"

UENUM(BlueprintType)
enum class ER5BLAccountRoles : uint8 {
    Player,
    Admin,
    Editor,
    Viewer,
};

