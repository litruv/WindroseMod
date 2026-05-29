#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_CrewListener.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_CrewListener : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UR5ScenarioListener_CrewListener();

};

