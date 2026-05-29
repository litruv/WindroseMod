#pragma once
#include "CoreMinimal.h"
#include "ER5WaitTargetDataConfirmationType.generated.h"

UENUM(BlueprintType)
enum class ER5WaitTargetDataConfirmationType : uint8 {
    Instant,
    UserConfirm,
    Custom,
};

