#pragma once
#include "CoreMinimal.h"
#include "EGCFSMTriggerEventTargetPolicy.generated.h"

UENUM(BlueprintType)
enum class EGCFSMTriggerEventTargetPolicy : uint8 {
    ContextObject,
    TargetObject,
};

