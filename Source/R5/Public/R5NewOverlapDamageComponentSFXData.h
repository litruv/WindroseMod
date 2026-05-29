#pragma once
#include "CoreMinimal.h"
#include "R5NewOverlapDamageComponentSFXData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5NewOverlapDamageComponentSFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    R5_API FR5NewOverlapDamageComponentSFXData();
};

