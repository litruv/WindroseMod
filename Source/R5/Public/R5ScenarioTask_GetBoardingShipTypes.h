#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "ER5ShipType.h"
#include "R5ScenarioTask_GetBoardingShipTypes.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetBoardingShipTypes : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipType AttackerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipType VictimType;
    
public:
    UR5ScenarioTask_GetBoardingShipTypes();

};

