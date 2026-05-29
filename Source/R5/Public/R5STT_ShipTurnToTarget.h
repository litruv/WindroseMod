#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipTurnToBase.h"
#include "R5STT_ShipTurnToTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipTurnToTarget : public FR5STT_ShipTurnToBase {
    GENERATED_BODY()
public:
    FR5STT_ShipTurnToTarget();
};

