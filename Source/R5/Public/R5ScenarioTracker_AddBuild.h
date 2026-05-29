#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_AddBuild.generated.h"

class UR5BuildingItem;
class UR5ScenarioNode;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_AddBuild : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_AddBuild();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker* CreateTracker(ER5ScenarioBlackboardType BlackboardType, bool SaveToPersistent, UR5ScenarioNode* Owner, TSoftObjectPtr<UR5BuildingItem> BuildingItem, FGameplayTag InBuildingBBTag);
    
};

