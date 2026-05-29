#pragma once
#include "CoreMinimal.h"
#include "ER5TeleportationWithinActorType.generated.h"

UENUM(BlueprintType)
enum class ER5TeleportationWithinActorType : uint8 {
    Socket,
    ComponentName,
    AbsoluteValue,
};

