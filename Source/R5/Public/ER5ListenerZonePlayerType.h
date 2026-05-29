#pragma once
#include "CoreMinimal.h"
#include "ER5ListenerZonePlayerType.generated.h"

UENUM(BlueprintType)
enum class ER5ListenerZonePlayerType : uint8 {
    PlayerByClassType,
    PlayerInContext,
};

