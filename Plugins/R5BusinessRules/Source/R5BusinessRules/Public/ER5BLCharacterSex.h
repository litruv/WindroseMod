#pragma once
#include "CoreMinimal.h"
#include "ER5BLCharacterSex.generated.h"

UENUM(BlueprintType)
enum class ER5BLCharacterSex : uint8 {
    Any,
    Male,
    Female,
    Num,
};

