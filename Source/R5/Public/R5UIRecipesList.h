#pragma once
#include "CoreMinimal.h"
#include "R5UIRecipeData.h"
#include "R5UIRecipesList.generated.h"

USTRUCT(BlueprintType)
struct FR5UIRecipesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5UIRecipeData> AvailableRecipes;
    
    R5_API FR5UIRecipesList();
};

