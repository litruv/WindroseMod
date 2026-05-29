#pragma once
#include "CoreMinimal.h"
#include "ER5CarryState.generated.h"

UENUM(BlueprintType)
enum class ER5CarryState : uint8 {
    None,
    CarriedByPlayer,
    CarriedByDynamicObject,
};

