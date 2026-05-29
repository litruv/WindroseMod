#pragma once
#include "CoreMinimal.h"
#include "R5SoundCosmeticDataDescription.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5SoundCosmeticDataDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    R5_API FR5SoundCosmeticDataDescription();
};

