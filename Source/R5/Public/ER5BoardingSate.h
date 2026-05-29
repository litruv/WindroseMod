#pragma once
#include "CoreMinimal.h"
#include "ER5BoardingSate.generated.h"

UENUM(BlueprintType)
enum class ER5BoardingSate : uint8 {
    PreBoarding,
    Boarding,
    PostBoarding,
    None,
};

