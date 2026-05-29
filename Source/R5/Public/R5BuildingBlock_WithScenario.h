#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioInterface -FallbackName=R5ScenarioInterface
#include "R5ScenarioInterface.h"
#include "R5BuildingBlock.h"
#include "R5BuildingBlock_WithScenario.generated.h"

class UR5ActorRegistratorComponentDec2024;
class UR5ScenarioComponent_ForActor_BuildingBlock;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_WithScenario : public AR5BuildingBlock, public IR5ScenarioInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForActor_BuildingBlock* R5ScenarioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ActorRegistratorComponentDec2024* ActorRegistratorComponent;
    
public:
    AR5BuildingBlock_WithScenario(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

