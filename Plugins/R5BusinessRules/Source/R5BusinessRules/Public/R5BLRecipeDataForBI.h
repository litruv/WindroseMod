#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipeCostForBI.h"
#include "R5BLRecipeResultDataForBI.h"
#include "R5BLRecipeDataForBI.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeDataForBI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipeResultDataForBI RecipeResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipeCostForBI> RecipeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CraftDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FinishTime;
    
    FR5BLRecipeDataForBI();
};

