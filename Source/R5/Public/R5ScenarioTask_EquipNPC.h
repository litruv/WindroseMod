#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_EquipNPC.generated.h"

class APawn;
class UR5BLInventoryItem;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_EquipNPC : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> NPCItemToEquip;
    
public:
    UR5ScenarioTask_EquipNPC();

};

