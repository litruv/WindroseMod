#pragma once
#include "CoreMinimal.h"
#include "ER5DrawWeaponAction.generated.h"

UENUM(BlueprintType)
enum class ER5DrawWeaponAction : uint8 {
    PlaceHolder,
    Drawing,
    PuttingAway,
    Attach,
    Drawn,
    Ongoing,
};

