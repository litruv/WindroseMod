#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_RecipeUnlocked.generated.h"

class UR5BLPlayerMetadataView;
class UR5BLRecipeData;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_RecipeUnlocked : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeData> TargetRecipe;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerMetadataView* PlayerMetadataView;
    
public:
    UR5ScenarioListener_RecipeUnlocked();

};

