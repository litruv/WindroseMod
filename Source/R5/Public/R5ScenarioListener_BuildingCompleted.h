#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_BuildingCompleted.generated.h"

class UR5BuildingItem;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_BuildingCompleted : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BuildingItem> RequiredBuilding;
    
public:
    UR5ScenarioListener_BuildingCompleted();

};

