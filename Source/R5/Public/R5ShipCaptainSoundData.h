#pragma once
#include "CoreMinimal.h"
#include "R5ShipCaptainSoundData.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FR5ShipCaptainSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* CaptainSoundMix;
    
    R5_API FR5ShipCaptainSoundData();
};

