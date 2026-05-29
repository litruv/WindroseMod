#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5ScenarioBlackboardType.h"
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_TagAS.generated.h"

class UR5ScenarioNode;
class UR5ScenarioTracker_TagAS;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioTracker_TagAS : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_TagAS();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_TagAS* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer Tags);
    
};

