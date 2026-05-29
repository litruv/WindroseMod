#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipe.generated.h"

class UR5BLRecipeData;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeData> RecipeData;
    
    FR5BLRecipe();
};

