#pragma once
#include "CoreMinimal.h"
#include "R5UIRecipeItemData.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct FR5UIRecipeItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> ItemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemsCountInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeltaItems;
    
    R5_API FR5UIRecipeItemData();
};

