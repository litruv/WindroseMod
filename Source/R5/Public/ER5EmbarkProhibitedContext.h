#pragma once
#include "CoreMinimal.h"
#include "ER5EmbarkProhibitedContext.generated.h"

UENUM(BlueprintType)
enum class ER5EmbarkProhibitedContext : uint8 {
    None,
    ShipDeath,
    Boarding,
};

