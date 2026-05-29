#pragma once
#include "CoreMinimal.h"
#include "ER5KeyModifier.generated.h"

UENUM(BlueprintType)
enum class ER5KeyModifier : uint8 {
    NoModifier,
    QuickMove,
    TakeApart,
    QuickDrop,
};

