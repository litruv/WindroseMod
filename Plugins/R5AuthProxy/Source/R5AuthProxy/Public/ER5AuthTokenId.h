#pragma once
#include "CoreMinimal.h"
#include "ER5AuthTokenId.generated.h"

UENUM(BlueprintType)
enum class ER5AuthTokenId : uint8 {
    Access,
    Refresh,
};

