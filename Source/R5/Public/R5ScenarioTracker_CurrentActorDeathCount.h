#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_CurrentActorDeathCount.generated.h"

class AActor;
class UR5ScenarioNode;
class UR5ScenarioTracker_CurrentActorDeathCount;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_CurrentActorDeathCount : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_CurrentActorDeathCount();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* Owner);
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_CurrentActorDeathCount* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTag DeathCounterTag);
    
};

