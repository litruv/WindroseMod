#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipAmbientSoundData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipAmbientSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData WindCue;
    
    R5_API FR5ShipAmbientSoundData();
};

