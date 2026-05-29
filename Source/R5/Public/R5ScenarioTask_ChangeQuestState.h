#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "ER5TargetQuestState.h"
#include "R5ScenarioTask_ChangeQuestState.generated.h"

class UR5BLQuestParams;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_ChangeQuestState : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5TargetQuestState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkQuestAsUpdated;
    
public:
    UR5ScenarioTask_ChangeQuestState();

};

