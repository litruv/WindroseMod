#pragma once
#include "CoreMinimal.h"
#include "ER5AccountTracker_Components.generated.h"

UENUM()
enum class ER5AccountTracker_Components {
    None,
    PlayerState_ASC = 1024,
    Ship = 2048,
    R5PlayerCharacter = 4096,
    End = 1048576,
    All = 1151,
    AllWithoutCharacter = 1147,
    AllShip = AllWithoutCharacter,
    AllR5PlayerCharacter = 4219,
};

