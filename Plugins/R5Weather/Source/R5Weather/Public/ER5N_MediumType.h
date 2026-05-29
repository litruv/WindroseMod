#pragma once
#include "CoreMinimal.h"
#include "ER5N_MediumType.generated.h"

UENUM(BlueprintType)
enum class ER5N_MediumType : uint8 {
    Unknown,
    Water,
    Air,
    Earth,
    Actor,
};

