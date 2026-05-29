#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5STT_ShipShootToTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipShootToTarget : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5STT_ShipShootToTarget();
};

