#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ShipSoundWithParamsData.h"
#include "R5ShipWaterSoundData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipWaterSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSoundWithParamsData WaveBreakingCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SensorTag;
    
    R5_API FR5ShipWaterSoundData();
};

