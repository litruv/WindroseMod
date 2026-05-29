#pragma once
#include "CoreMinimal.h"
#include "ER5RecoilTaskSimpleState.generated.h"

UENUM(BlueprintType)
enum class ER5RecoilTaskSimpleState : uint8 {
    Application,
    Compensation,
    None,
};

