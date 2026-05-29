#pragma once
#include "CoreMinimal.h"
#include "ER5BLCraftAvailability.generated.h"

UENUM(BlueprintType)
enum class ER5BLCraftAvailability : uint8 {
    NotEnoughResources,
    NotEnoughCraftComfort,
    QueueIsFull,
    Available,
    NotUnlocked,
    NotAvailableAttributeRange,
    NotAvailableRecipeRequirements,
    TargetInventoryIsFull,
    HasNotSelectedRecipes,
};

