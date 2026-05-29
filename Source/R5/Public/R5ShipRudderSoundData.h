#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipRudderSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipRudderSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData RudderRotationLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipPlayFixedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RudderLimitCue2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData RudderLimitCue3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RudderStopInputCue;
    
    R5_API FR5ShipRudderSoundData();
};

