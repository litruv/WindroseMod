#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTrackerRegular -FallbackName=R5ScenarioTrackerRegular
#include "R5ScenarioTrackerRegular.h"
#include "R5ScenarioTracker_PoiCountChildObjects.generated.h"

class UR5ScenarioNode;
class UR5ScenarioTracker_PoiCountChildObjects;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_PoiCountChildObjects : public UR5ScenarioTrackerRegular {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WriteAsTag;
    
    UR5ScenarioTracker_PoiCountChildObjects();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_PoiCountChildObjects* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer Tags, FGameplayTag WriteToBlackboardAs);
    
};

