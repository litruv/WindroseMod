#pragma once
#include "CoreMinimal.h"
#include "ER5CaProxySettings_ServerAuthorizationType.generated.h"

UENUM(BlueprintType)
enum class ER5CaProxySettings_ServerAuthorizationType : uint8 {
    None,
    Anonymously,
};

