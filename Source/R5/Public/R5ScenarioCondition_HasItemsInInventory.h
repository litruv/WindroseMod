#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeCondition -FallbackName=R5ScenarioGraphNodeCondition
#include "R5ScenarioGraphNodeCondition.h"
#include "ER5NodeFilterType.h"
#include "R5ScenarioCondition_HasItemsInInventory.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioCondition_HasItemsInInventory : public UR5ScenarioGraphNodeCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> ItemsStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NodeFilterType RequiredCondition;
    
public:
    UR5ScenarioCondition_HasItemsInInventory();

};

