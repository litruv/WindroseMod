#pragma once
#include "CoreMinimal.h"
#include "R5ShipBoostSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipBoostSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BoostStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BoostEndSound;
    
    R5_API FR5ShipBoostSoundData();
};

