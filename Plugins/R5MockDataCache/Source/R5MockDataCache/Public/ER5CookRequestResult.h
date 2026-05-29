#pragma once
#include "CoreMinimal.h"
#include "ER5CookRequestResult.generated.h"

UENUM(BlueprintType)
enum class ER5CookRequestResult : uint8 {
    None,
    Failed,
    Success,
    MissingItems,
    NotSupportRecipe,
    AnotherRequirement,
};

