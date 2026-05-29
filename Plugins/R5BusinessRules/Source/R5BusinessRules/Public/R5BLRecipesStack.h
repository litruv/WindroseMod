#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipe.h"
#include "R5BLRecipesStack.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipesStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipe Recipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLRecipesStack();
};

