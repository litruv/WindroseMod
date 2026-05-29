#pragma once
#include "CoreMinimal.h"
#include "ETargetQuarter.generated.h"

UENUM(BlueprintType)
enum class ETargetQuarter : uint8 {
    None,
    ForwardLeft,
    ForwardRight,
    BackwardLeft,
    BackwardRight,
};

