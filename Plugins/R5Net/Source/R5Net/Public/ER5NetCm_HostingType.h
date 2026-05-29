#pragma once
#include "CoreMinimal.h"
#include "ER5NetCm_HostingType.generated.h"

UENUM(BlueprintType)
enum class ER5NetCm_HostingType : uint8 {
    None,
    ClientHosted,
    Dedicated,
};

