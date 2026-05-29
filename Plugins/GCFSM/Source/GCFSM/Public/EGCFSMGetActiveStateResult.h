#pragma once
#include "CoreMinimal.h"
#include "EGCFSMGetActiveStateResult.generated.h"

UENUM(BlueprintType)
enum class EGCFSMGetActiveStateResult : uint8 {
    State,
    NoState,
};

