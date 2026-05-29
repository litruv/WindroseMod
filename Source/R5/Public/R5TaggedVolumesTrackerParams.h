#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "TaggedVolumeTrackerActionsData.h"
#include "R5TaggedVolumesTrackerParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TaggedVolumesTrackerParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTaggedVolumeTrackerActionsData> ServerActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTaggedVolumeTrackerActionsData> LocalPlayerActions;
    
    UR5TaggedVolumesTrackerParams();

};

