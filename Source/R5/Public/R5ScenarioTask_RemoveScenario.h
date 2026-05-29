#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_RemoveScenario.generated.h"

class UR5ScenarioSettings;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_RemoveScenario : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioSettings> ScenarioSettings;
    
    UR5ScenarioTask_RemoveScenario();

};

