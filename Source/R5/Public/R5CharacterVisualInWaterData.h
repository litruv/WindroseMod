#pragma once
#include "CoreMinimal.h"
#include "R5CharacterVisualInWaterData.generated.h"

class UR5N_WaterDecalEffectAsset;

USTRUCT(BlueprintType)
struct FR5CharacterVisualInWaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5N_WaterDecalEffectAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaterDecalSocketName;
    
    R5_API FR5CharacterVisualInWaterData();
};

