#pragma once
#include "CoreMinimal.h"
#include "R5BLReward.h"
#include "R5BLInventory_AddItemsResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_AddItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLReward AddedItems;
    
    FR5BLInventory_AddItemsResult();
};

