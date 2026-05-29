#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "ER5ScenarioQuestState.h"
#include "R5ScenarioListener_WaitQuestState.generated.h"

class UR5BLQuestParams;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_WaitQuestState : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioQuestState QuestStateChange;
    
public:
    UR5ScenarioListener_WaitQuestState();

};

