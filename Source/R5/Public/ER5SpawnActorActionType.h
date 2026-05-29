#pragma once
#include "CoreMinimal.h"
#include "ER5SpawnActorActionType.generated.h"

UENUM()
enum class ER5SpawnActorActionType : int32 {
    OnGround,
    InPlace,
    Attached,
};

