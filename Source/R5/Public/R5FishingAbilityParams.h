#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5FishingAnimData.h"
#include "R5FishingEffectsData.h"
#include "R5FishingLaunchData.h"
#include "R5FishingLogicData.h"
#include "R5FishingAbilityParams.generated.h"

UCLASS(Blueprintable)
class UR5FishingAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FishingLaunchData LaunchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FishingAnimData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FishingEffectsData EffectsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FishingLogicData LogicData;
    
    UR5FishingAbilityParams();

};

