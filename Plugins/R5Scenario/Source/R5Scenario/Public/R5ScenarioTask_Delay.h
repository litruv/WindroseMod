#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_Delay.generated.h"

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioTask_Delay : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DelaySeconds;
    
    UR5ScenarioTask_Delay();

};

