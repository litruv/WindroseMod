#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.generated.h"

UENUM(BlueprintType)
enum class EMappingContext : uint8 {
    Remapping,
    Mapping,
    Unapplied,
    Reset,
};

