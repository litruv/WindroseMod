#pragma once
#include "CoreMinimal.h"
#include "ER5BackAuth_AuthServerType.generated.h"

UENUM(BlueprintType)
enum class ER5BackAuth_AuthServerType : uint8 {
    NoAuthServer,
    AuthServerOnDemand,
    AuthServerOnPremise,
};

