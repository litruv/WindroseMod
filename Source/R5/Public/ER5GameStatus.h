#pragma once
#include "CoreMinimal.h"
#include "ER5GameStatus.generated.h"

UENUM(BlueprintType)
enum class ER5GameStatus : uint8 {
    Fine,
    DataInconsistent,
    R5CheckHappened,
    WorldCorrupted,
    MultipleProblems,
};

