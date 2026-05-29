#pragma once
#include "CoreMinimal.h"
#include "ER5BLCommonIslandType.generated.h"

UENUM(BlueprintType)
enum class ER5BLCommonIslandType : uint8 {
    None,
    StartingIsland,
    PersonalIsland,
    EntranceHall,
    Lobby,
    Unknown,
};

