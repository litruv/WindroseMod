#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipMoveToBase.h"
#include "R5STT_ShipChaseTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipChaseTarget : public FR5STT_ShipMoveToBase {
    GENERATED_BODY()
public:
    FR5STT_ShipChaseTarget();
};

