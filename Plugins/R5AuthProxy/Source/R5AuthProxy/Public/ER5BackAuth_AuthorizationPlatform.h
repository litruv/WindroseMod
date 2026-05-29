#pragma once
#include "CoreMinimal.h"
#include "ER5BackAuth_AuthorizationPlatform.generated.h"

UENUM(BlueprintType)
enum class ER5BackAuth_AuthorizationPlatform : uint8 {
    OTP,
    Steam,
    Eos,
    Stove,
};

