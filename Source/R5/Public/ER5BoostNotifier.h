#pragma once
#include "CoreMinimal.h"
#include "ER5BoostNotifier.generated.h"

UENUM(BlueprintType)
enum class ER5BoostNotifier : uint8 {
    None,
    InsufficientEnergy,
    RepairCancelled,
    AimingCancelled,
    GearSwitchDuringBoost,
    NonBoostMaxGearSwitch,
};

