#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_InventoryModuleChanged.generated.h"

class UR5BLInventoryModuleView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_InventoryModuleChanged : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryModuleTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryModuleView* InventoryModuleView;
    
public:
    UR5ScenarioListener_InventoryModuleChanged();

};

