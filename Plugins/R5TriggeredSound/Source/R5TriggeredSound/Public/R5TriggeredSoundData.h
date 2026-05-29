#pragma once
#include "CoreMinimal.h"
#include "R5CommonTriggeredSoundVolumeData.h"
#include "R5TriggeredSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5TriggeredSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CommonTriggeredSoundVolumeData SoundVolumeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> TriggeredSound;
    
    R5TRIGGEREDSOUND_API FR5TriggeredSoundData();
};

