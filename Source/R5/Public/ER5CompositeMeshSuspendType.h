#pragma once
#include "CoreMinimal.h"
#include "ER5CompositeMeshSuspendType.generated.h"

UENUM(BlueprintType)
enum class ER5CompositeMeshSuspendType : uint8 {
    None,
    SuspendHat,
    SuspendBandana,
    SuspendHeadband,
    Light,
    Medium,
    Full,
};

