#pragma once
#include "CoreMinimal.h"
#include "ER5CombatInitFlags.generated.h"

UENUM()
enum class ER5CombatInitFlags {
    None,
    Params,
    GAS,
    FSM = 4,
    Movement = 8,
    PlayerInputSubsystem = 16,
    EnhancedPlayerInput = 32,
    End = 1024,
    All = 63,
    Params_GAS = 3,
    Params_GAS_FSM = 7,
};

