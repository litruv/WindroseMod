#pragma once
#include "CoreMinimal.h"
#include "EFSubtitleType.generated.h"

UENUM(BlueprintType)
enum class EFSubtitleType : uint8 {
    None,
    Active,
    History,
    All,
};

