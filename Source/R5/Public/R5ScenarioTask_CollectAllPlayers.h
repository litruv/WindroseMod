#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_CollectAllPlayers.generated.h"

class AR5PlayerCharacter;
class AR5PlayerState;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_CollectAllPlayers : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5PlayerCharacter*> PlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5PlayerState*> PlayerStates;
    
    UR5ScenarioTask_CollectAllPlayers();

};

