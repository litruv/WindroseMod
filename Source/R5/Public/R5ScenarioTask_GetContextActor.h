#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "ER5ScenarioContextType.h"
#include "R5ScenarioTask_GetContextActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetContextActor : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioContextType ContextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ContextActor;
    
    UR5ScenarioTask_GetContextActor();

};

