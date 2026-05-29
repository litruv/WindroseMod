#pragma once
#include "CoreMinimal.h"
#include "R5CannonRotationSoundData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FR5CannonRotationSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> RotatingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    R5_API FR5CannonRotationSoundData();
};

