#pragma once
#include "CoreMinimal.h"
#include "EStoveInitState.generated.h"

UENUM(BlueprintType)
enum class EStoveInitState : uint8 {
    None,
    Pending,
    Fail,
    Complete,
};

