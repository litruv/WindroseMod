#pragma once
#include "CoreMinimal.h"
#include "ER5AbilityTaskNetSyncType.generated.h"

UENUM(BlueprintType)
enum class ER5AbilityTaskNetSyncType : uint8 {
    BothWait,
    OnlyServerWait,
    OnlyClientWait,
};

