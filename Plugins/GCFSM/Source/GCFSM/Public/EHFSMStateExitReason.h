#pragma once
#include "CoreMinimal.h"
#include "EHFSMStateExitReason.generated.h"

UENUM(BlueprintType)
enum class EHFSMStateExitReason : uint8 {
    LocalTransition,
    TransitionInParentsOrShutdown,
};

