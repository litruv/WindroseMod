#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "Misc/Timespan.h"
#include "R5BLCraftRecipeData.h"
#include "R5BLRecipe.h"
#include "R5BLCraftQueueNode.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCraftQueueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipe Recipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCraftRecipeData> RecipeQueueStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan RemainingDuration;
    
    FR5BLCraftQueueNode();
};

