#pragma once
#include "CoreMinimal.h"
#include "ER5CoopDocumentRestoreAction.generated.h"

UENUM(BlueprintType)
enum class ER5CoopDocumentRestoreAction : uint8 {
    NotChecked,
    Ok,
    Restore,
    Delete,
};

