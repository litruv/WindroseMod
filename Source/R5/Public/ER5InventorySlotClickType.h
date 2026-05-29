#pragma once
#include "CoreMinimal.h"
#include "ER5InventorySlotClickType.generated.h"

UENUM(BlueprintType)
enum class ER5InventorySlotClickType : uint8 {
    None,
    PrimaryAction,
    SecondaryAction,
    Drop,
};

