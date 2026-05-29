#pragma once
#include "CoreMinimal.h"
#include "R5ShipLandscapeContactSoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipLandscapeContactSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RunningAgroundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GettingOffGroundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    R5_API FR5ShipLandscapeContactSoundData();
};

