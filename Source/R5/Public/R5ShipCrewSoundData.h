#pragma once
#include "CoreMinimal.h"
#include "R5ShipCrewSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipCrewSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundBase*> ShipCrewCues;
    
    R5_API FR5ShipCrewSoundData();
};

