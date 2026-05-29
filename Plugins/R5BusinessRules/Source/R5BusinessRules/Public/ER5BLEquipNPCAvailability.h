#pragma once
#include "CoreMinimal.h"
#include "ER5BLEquipNPCAvailability.generated.h"

UENUM(BlueprintType)
enum class ER5BLEquipNPCAvailability : uint8 {
    Available,
    NPCWasEquippedToAnotherBuilding,
    NPCAlreadyThere,
    TargetSlotNotSupported,
};

