#pragma once
#include "CoreMinimal.h"
#include "ER5DataKeeperUi_CoopResultType.generated.h"

UENUM(BlueprintType)
enum class ER5DataKeeperUi_CoopResultType : uint8 {
    None,
    Success,
    Failed,
    NotFound,
    PasswordMismatch,
    DocumentVersionMismatch,
    NotUnique,
    NoSlotAvailable,
    ConnectionError,
    Cancel,
};

