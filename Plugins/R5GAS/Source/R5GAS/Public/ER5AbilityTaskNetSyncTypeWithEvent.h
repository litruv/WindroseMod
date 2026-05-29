#pragma once
#include "CoreMinimal.h"
#include "ER5AbilityTaskNetSyncTypeWithEvent.generated.h"

UENUM(BlueprintType)
enum class ER5AbilityTaskNetSyncTypeWithEvent : uint8 {
    ServerWait,
    ClientWait,
};

