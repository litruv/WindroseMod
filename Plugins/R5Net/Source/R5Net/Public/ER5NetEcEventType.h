#pragma once
#include "CoreMinimal.h"
#include "ER5NetEcEventType.generated.h"

UENUM(BlueprintType)
enum class ER5NetEcEventType : uint8 {
    None,
    R5Check,
    R5NoEntry,
    R5Ensure,
    R5Error,
    WorldBeginPlay,
    WorldEndPlay,
    AppStart,
    AppEnd,
};

