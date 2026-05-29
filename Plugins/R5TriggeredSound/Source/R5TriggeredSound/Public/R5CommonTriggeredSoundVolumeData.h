#pragma once
#include "CoreMinimal.h"
#include "R5CommonTriggeredSoundVolumeData.generated.h"

USTRUCT(BlueprintType)
struct FR5CommonTriggeredSoundVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    R5TRIGGEREDSOUND_API FR5CommonTriggeredSoundVolumeData();
};

