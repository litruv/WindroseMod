#pragma once
#include "CoreMinimal.h"
#include "ER5SimpleShotLaunchDirectionType.generated.h"

UENUM(BlueprintType)
enum class ER5SimpleShotLaunchDirectionType : uint8 {
    ActorForwardVector,
    SocketTransform,
    Vertically,
};

