#pragma once
#include "CoreMinimal.h"
#include "ER5CaProxySettings_ClientAuthorizationType.generated.h"

UENUM(BlueprintType)
enum class ER5CaProxySettings_ClientAuthorizationType : uint8 {
    None,
    Dev_AccountId,
    Steam,
    Eos,
    Stove,
};

