#pragma once
#include "CoreMinimal.h"
#include "EGCFSMTriggerEventQueuePolicy.generated.h"

UENUM(BlueprintType)
enum class EGCFSMTriggerEventQueuePolicy : uint8 {
    JustQueue,
    QueueUnlessAlreadyInQueue,
    DiscardQueuedEventsThenQueue,
};

