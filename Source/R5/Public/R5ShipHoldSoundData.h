#pragma once
#include "CoreMinimal.h"
#include "R5ShipHoldSoundData.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FR5ShipHoldSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundMix*> HoldLevelSoundMixes;
    
    R5_API FR5ShipHoldSoundData();
};

