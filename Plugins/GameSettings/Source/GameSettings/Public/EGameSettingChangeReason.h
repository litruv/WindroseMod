#pragma once
#include "CoreMinimal.h"
#include "EGameSettingChangeReason.generated.h"

UENUM(BlueprintType)
enum class EGameSettingChangeReason : uint8 {
    Change,
    DependencyChanged,
    ResetToDefault,
    RestoreToInitial,
};

