#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMState -FallbackName=HFSMState
#include "HFSMState.h"
#include "R5HFSMWaitScenarioReady.generated.h"

UCLASS(Blueprintable)
class UR5HFSMWaitScenarioReady : public UHFSMState {
    GENERATED_BODY()
public:
    UR5HFSMWaitScenarioReady();

};

