#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AttributeTrackerData.h"
#include "R5AttributeTrackerAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AttributeTrackerAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AttributeTrackerData> TrackersData;
    
    UR5AttributeTrackerAbilityParams();

};

