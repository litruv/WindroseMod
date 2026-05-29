#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_TaggedVolume.generated.h"

class UR5ScenarioNode;
class UR5ScenarioTracker_TaggedVolume;
class UR5TaggedVolumeInvokerComponent;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_TaggedVolume : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumeInvokerComponent* VolumeInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WriteAsTag;
    
    UR5ScenarioTracker_TaggedVolume();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_TaggedVolume* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer VolumeTags, FGameplayTag WriteToBlackboardAs);
    
};

