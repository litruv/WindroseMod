#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipMoveToBase.h"
#include "R5STT_ShipMoveToLocation.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipMoveToLocation : public FR5STT_ShipMoveToBase {
    GENERATED_BODY()
public:
    FR5STT_ShipMoveToLocation();
};

