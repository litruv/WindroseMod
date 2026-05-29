#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeCondition -FallbackName=R5ScenarioGraphNodeCondition
#include "R5ScenarioGraphNodeCondition.h"
#include "R5ScenarioCondition_BranchByQuestState.generated.h"

class UR5BLQuestParams;

UCLASS(Blueprintable)
class R5_API UR5ScenarioCondition_BranchByQuestState : public UR5ScenarioGraphNodeCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> Quest;
    
public:
    UR5ScenarioCondition_BranchByQuestState();

};

