#pragma once
#include "CoreMinimal.h"
#include "ER5InputMode.generated.h"

UENUM(BlueprintType)
enum class ER5InputMode : uint8 {
    UI,
    GameAndUI,
    Game,
};

