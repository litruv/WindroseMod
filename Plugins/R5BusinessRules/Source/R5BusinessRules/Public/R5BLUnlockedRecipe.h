#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipe.h"
#include "R5BLUnlockedRecipe.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLUnlockedRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipe Recipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNew;
    
    FR5BLUnlockedRecipe();
};

