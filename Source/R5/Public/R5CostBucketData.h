#pragma once
#include "CoreMinimal.h"
#include "R5UIRecipeItemData.h"
#include "R5CostBucketData.generated.h"

USTRUCT(BlueprintType)
struct FR5CostBucketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5UIRecipeItemData> CostItems;
    
    R5_API FR5CostBucketData();
};

