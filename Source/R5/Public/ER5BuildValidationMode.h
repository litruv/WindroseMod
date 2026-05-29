#pragma once
#include "CoreMinimal.h"
#include "ER5BuildValidationMode.generated.h"

UENUM(BlueprintType)
enum class ER5BuildValidationMode : uint8 {
    PredictClient,
    AuthorizeServer,
    Both,
};

