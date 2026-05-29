#pragma once
#include "CoreMinimal.h"
#include "R5ShipInteractionSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipInteractionSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EnterShipCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ExitShipCue;
    
    R5_API FR5ShipInteractionSoundData();
};

