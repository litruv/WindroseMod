#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioNodeHandle -FallbackName=R5ScenarioNodeHandle
#include "R5ScenarioNodeHandle.h"
#include "R5ScenarioListener_CoopGate.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_CoopGate : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScenarioNodeHandle NodeToRemove;
    
    UR5ScenarioListener_CoopGate();

    UFUNCTION(BlueprintCallable)
    static void ExecuteGateForAll(FR5ScenarioNodeHandle GateHandle);
    
};

