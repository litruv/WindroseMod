#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_SubtickType.generated.h"

UENUM(BlueprintType)
enum class ER5NPhys_SubtickType : uint8 {
    DontUse,
    FixedStep,
    SyncedWithTick,
};

