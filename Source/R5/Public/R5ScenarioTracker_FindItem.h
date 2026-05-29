#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_FindItem.generated.h"

class UR5BLInventoryItem;
class UR5BLInventoryView;
class UR5ScenarioNode;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_FindItem : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UR5ScenarioTracker_FindItem();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, TSoftObjectPtr<UR5BLInventoryItem> ItemParams, FGameplayTag ItemCounterTag);
    
};

