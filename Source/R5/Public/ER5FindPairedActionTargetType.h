#pragma once
#include "CoreMinimal.h"
#include "ER5FindPairedActionTargetType.generated.h"

UENUM(BlueprintType)
enum class ER5FindPairedActionTargetType : uint8 {
    ActorForwardVector,
    ControlRotation,
};

