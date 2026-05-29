#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipRepairSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipRepairSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData RepairLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RepairEndCue;
    
    R5_API FR5ShipRepairSoundData();
};

