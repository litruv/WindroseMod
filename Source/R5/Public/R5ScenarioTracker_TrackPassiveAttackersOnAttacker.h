#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
#include "R5ScenarioTracker_BoardingPassengerCountBase.h"
#include "R5ScenarioTracker_TrackPassiveAttackersOnAttacker.generated.h"

class UR5ScenarioNode;
class UR5ScenarioTracker_TrackPassiveAttackersOnAttacker;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_TrackPassiveAttackersOnAttacker : public UR5ScenarioTracker_BoardingPassengerCountBase {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_TrackPassiveAttackersOnAttacker();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_TrackPassiveAttackersOnAttacker* CreateTracker(ER5ScenarioBlackboardType InBlackboardType, UR5ScenarioNode* Owner, bool SaveToPersistent, FGameplayTag InBlackboardTagCount);
    
};

