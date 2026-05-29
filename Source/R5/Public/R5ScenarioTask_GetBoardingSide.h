#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=ER5ShipSide -FallbackName=ER5ShipSide
#include "ER5ShipSide.h"
#include "R5ScenarioTask_ShipTask.h"
#include "R5ScenarioTask_GetBoardingSide.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetBoardingSide : public UR5ScenarioTask_ShipTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipSide Side;
    
    UR5ScenarioTask_GetBoardingSide();

};

