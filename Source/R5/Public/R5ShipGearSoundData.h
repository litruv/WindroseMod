#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipGearSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipGearSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GearChangeCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GearLimitCue2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData GearLimitCue3D;
    
    R5_API FR5ShipGearSoundData();
};

