#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioWorldProxy -FallbackName=R5ScenarioWorldProxy
#include "R5ScenarioWorldProxy.h"
#include "R5ScenarioWorldProxy_ForShip.generated.h"

class AR5ShipPawnBase;
class UR5BLScenarioSaveView;
class UR5BLShipView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioWorldProxy_ForShip : public UR5ScenarioWorldProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5ShipPawnBase* ShipPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* ScenarioSaveView;
    
public:
    UR5ScenarioWorldProxy_ForShip();

};

