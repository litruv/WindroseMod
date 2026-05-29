#pragma once
#include "CoreMinimal.h"
#include "ER5BLCompositeMeshSuspendType.generated.h"

UENUM(BlueprintType)
enum class ER5BLCompositeMeshSuspendType : uint8 {
    None,
    SuspendHat,
    SuspendBandana,
    SuspendHeadband,
    Light,
    Medium,
    Full,
};

