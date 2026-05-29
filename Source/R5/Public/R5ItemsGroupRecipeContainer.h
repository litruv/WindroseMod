#pragma once
#include "CoreMinimal.h"
#include "R5ItemsGroupRecipeContainer.generated.h"

class UR5BLInventoryItem;
class UR5BLRecipeData;

USTRUCT(BlueprintType)
struct FR5ItemsGroupRecipeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> CommonItemForContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLRecipeData>> UnlockedRecipes;
    
    R5_API FR5ItemsGroupRecipeContainer();
};

