#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5GameplayOrchestratorSubsystem -FallbackName=R5GameplayOrchestratorSubsystem
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_Scenario.generated.h"

UCLASS(Blueprintable)
class R5_API UR5GOS_Scenario : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
    UR5GOS_Scenario();

};

