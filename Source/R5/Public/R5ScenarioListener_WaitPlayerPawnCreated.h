#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_WaitPlayerPawnCreated.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_WaitPlayerPawnCreated : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPlayerPawnCreated, APawn*, CreatedPawn);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnCreated OnPlayerPawnCreated;
    
public:
    UR5ScenarioListener_WaitPlayerPawnCreated();

};

