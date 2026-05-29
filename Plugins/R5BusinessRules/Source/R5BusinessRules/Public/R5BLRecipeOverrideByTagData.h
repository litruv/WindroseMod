#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLRecipeOverrideByTagData.generated.h"

class UR5BLRecipeOverride;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeOverrideByTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeOverride> RecipeOverride;
    
    FR5BLRecipeOverrideByTagData();
};

