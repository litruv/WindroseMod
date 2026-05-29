#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipe_V0_9_0.h"
#include "R5BLRecipesStack_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipesStack_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipe_V0_9_0 Recipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLRecipesStack_V0_9_0();
};

