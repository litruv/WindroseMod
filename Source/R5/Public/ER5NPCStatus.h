#pragma once
#include "CoreMinimal.h"
#include "ER5NPCStatus.generated.h"

UENUM(BlueprintType)
enum class ER5NPCStatus : uint8 {
    None,
    Available,
    Assigned,
    AssignedFromAnotherPlayer,
    Busy,
};

