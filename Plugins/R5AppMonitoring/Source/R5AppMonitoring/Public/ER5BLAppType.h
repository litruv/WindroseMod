#pragma once
#include "CoreMinimal.h"
#include "ER5BLAppType.generated.h"

UENUM(BlueprintType)
enum class ER5BLAppType : uint8 {
    Unknown,
    Server,
    Client,
    Editor,
};

