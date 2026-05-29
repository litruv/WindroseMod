#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioWorldProxy -FallbackName=R5ScenarioWorldProxy
#include "R5ScenarioWorldProxy.h"
#include "R5ScenarioWorldProxy_ForActor_BuildingBlock.generated.h"

class AR5BuildingBlock_WithScenario;
class UR5BLActor_BuildingBlockView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioWorldProxy_ForActor_BuildingBlock : public UR5ScenarioWorldProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLActor_BuildingBlockView* Actor_BuildingBlockView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BuildingBlock_WithScenario* OwnerActor;
    
public:
    UR5ScenarioWorldProxy_ForActor_BuildingBlock();

};

