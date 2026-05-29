#pragma once
#include "CoreMinimal.h"
#include "ER5NewOverlapDamageState.generated.h"

UENUM(BlueprintType)
enum class ER5NewOverlapDamageState : uint8 {
    Idle,
    Prepared,
    Executing,
    Finished,
    None,
};

