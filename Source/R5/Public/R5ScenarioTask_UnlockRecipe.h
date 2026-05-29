#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_UnlockRecipe.generated.h"

class UR5BLRecipeData;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_UnlockRecipe : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLRecipeData>> RecipesToUnlock;
    
public:
    UR5ScenarioTask_UnlockRecipe();

};

