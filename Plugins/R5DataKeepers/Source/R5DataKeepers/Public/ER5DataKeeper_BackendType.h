#pragma once
#include "CoreMinimal.h"
#include "ER5DataKeeper_BackendType.generated.h"

UENUM(BlueprintType)
enum class ER5DataKeeper_BackendType : uint8 {
    None,
    Coop,
    Gaas,
};

