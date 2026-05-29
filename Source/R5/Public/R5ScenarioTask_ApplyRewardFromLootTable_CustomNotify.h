#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_ApplyRewardFromLootTable.h"
#include "R5ScenarioTask_ApplyRewardFromLootTable_CustomNotify.generated.h"

class UR5NotificationsDataList;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_ApplyRewardFromLootTable_CustomNotify : public UR5ScenarioTask_ApplyRewardFromLootTable {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5NotificationsDataList> NotificationsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotificationKey;
    
public:
    UR5ScenarioTask_ApplyRewardFromLootTable_CustomNotify();

};

