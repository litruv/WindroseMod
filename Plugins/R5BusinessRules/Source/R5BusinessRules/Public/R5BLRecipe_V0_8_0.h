#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipe_V0_8_0.generated.h"

class UR5BLRecipeData;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipe_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeData> RecipeData;
    
    FR5BLRecipe_V0_8_0();
};

