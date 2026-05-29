#pragma once
#include "CoreMinimal.h"
#include "ER5AttachingDamageableActorState.generated.h"

UENUM(BlueprintType)
enum class ER5AttachingDamageableActorState : uint8 {
    Alive,
    Dead,
    Blocked,
};

