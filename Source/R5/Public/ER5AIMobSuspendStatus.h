#pragma once
#include "CoreMinimal.h"
#include "ER5AIMobSuspendStatus.generated.h"

UENUM(BlueprintType)
enum class ER5AIMobSuspendStatus : uint8 {
    PendingSuspend,
    Suspended,
    PendingResume,
    Resumed,
};

