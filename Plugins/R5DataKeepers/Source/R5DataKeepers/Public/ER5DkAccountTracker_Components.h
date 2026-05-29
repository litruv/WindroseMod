#pragma once
#include "CoreMinimal.h"
#include "ER5DkAccountTracker_Components.generated.h"

UENUM()
enum class ER5DkAccountTracker_Components {
    None,
    PlayerState,
    Controller,
    Character = 4,
    DataKeeper_Account = 8,
    DataKeeper_Account_AccountView = 16,
    DataKeeper_Account_DefaultPlayerView = 32,
    DataKeeper_Account_PlayerInWorldView = 64,
    End = 1024,
    All = 127,
    AllWithoutCharacter = 123,
};

