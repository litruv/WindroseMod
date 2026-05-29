#pragma once
#include "CoreMinimal.h"
#include "ER5ScShipInitState.generated.h"

UENUM(BlueprintType)
enum class ER5ScShipInitState : uint8 {
    None,
    Scheduled,
    Initialized,
};

