#pragma once
#include "CoreMinimal.h"
#include "R5SinkingShipFX_SoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5SinkingShipFX_SoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DeactivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactivationFadeInTime;
    
    R5_API FR5SinkingShipFX_SoundData();
};

