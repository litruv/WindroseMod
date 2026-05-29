#pragma once
#include "CoreMinimal.h"
#include "R5FootstepSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5FootstepSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundCue;
    
    R5_API FR5FootstepSoundData();
};

