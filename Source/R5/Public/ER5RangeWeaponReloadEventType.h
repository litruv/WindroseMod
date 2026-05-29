#pragma once
#include "CoreMinimal.h"
#include "ER5RangeWeaponReloadEventType.generated.h"

UENUM(BlueprintType)
enum class ER5RangeWeaponReloadEventType : uint8 {
    Started,
    Finished,
    Canceled,
};

