#pragma once
#include "CoreMinimal.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipSternSoundData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipSternSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData SternSoundData;
    
    R5_API FR5ShipSternSoundData();
};

