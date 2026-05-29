#pragma once
#include "CoreMinimal.h"
#include "ERShipTurnAroundMode.h"
#include "R5STT_ShipShootToTargetInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipShootToTargetInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERShipTurnAroundMode PreferredTurnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OversteerCoefficient;
    
    FR5STT_ShipShootToTargetInstanceData();
};

