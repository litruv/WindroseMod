#pragma once
#include "CoreMinimal.h"
#include "EAutosavePositionType.generated.h"

UENUM(BlueprintType)
enum class EAutosavePositionType : uint8 {
    Character,
    Ship,
    Passenger,
};

