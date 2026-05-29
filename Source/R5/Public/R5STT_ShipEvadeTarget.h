#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipMoveToBase.h"
#include "R5STT_ShipEvadeTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipEvadeTarget : public FR5STT_ShipMoveToBase {
    GENERATED_BODY()
public:
    FR5STT_ShipEvadeTarget();
};

