#pragma once
#include "CoreMinimal.h"
#include "ER5ShipBarkAction.generated.h"

UENUM(BlueprintType)
enum class ER5ShipBarkAction : uint8 {
    None,
    SinkEnemy,
    FullSpeed,
    ZeroSpeed,
    StartRepair,
    RefuelingWithRum,
    ShutUpCommand,
    CaptainAtTheHelm,
};

