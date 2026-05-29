#pragma once
#include "CoreMinimal.h"
#include "ER5SequenceFinishReason.generated.h"

UENUM(BlueprintType)
enum class ER5SequenceFinishReason : uint8 {
    None,
    Completed,
    Skipped,
    AlreadyPlayed,
};

