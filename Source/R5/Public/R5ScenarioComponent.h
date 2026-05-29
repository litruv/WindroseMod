#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioComponentBase -FallbackName=R5ScenarioComponentBase
#include "R5ScenarioComponentBase.h"
#include "R5SignificanceInterface.h"
#include "R5ScenarioComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UR5ScenarioComponent : public UR5ScenarioComponentBase, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
    UR5ScenarioComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

