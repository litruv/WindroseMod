#pragma once
#include "CoreMinimal.h"
#include "ER5FSMChangeStateType.generated.h"

UENUM()
enum class ER5FSMChangeStateType : int32 {
    PlayerRequest,
    Interrupt,
};

