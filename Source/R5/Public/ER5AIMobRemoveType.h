#pragma once
#include "CoreMinimal.h"
#include "ER5AIMobRemoveType.generated.h"

UENUM(BlueprintType)
enum class ER5AIMobRemoveType : uint8 {
    Immediately,
    Deferred,
};

