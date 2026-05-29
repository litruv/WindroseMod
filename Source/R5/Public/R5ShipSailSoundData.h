#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipSailSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipSailSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SailOpenedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SailClosedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SailMovingLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData SailLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundBase*> SailChangeDirectionCue;
    
    R5_API FR5ShipSailSoundData();
};

