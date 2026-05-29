#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipUnstuckInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipUnstuckInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAwayDistanceToUnstuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAroundAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAroundToleranceAngle;
    
    FR5STT_ShipUnstuckInstanceData();
};

