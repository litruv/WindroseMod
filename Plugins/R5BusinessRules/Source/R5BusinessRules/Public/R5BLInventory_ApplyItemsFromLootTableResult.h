#pragma once
#include "CoreMinimal.h"
#include "R5BLReward.h"
#include "R5BLInventory_ApplyItemsFromLootTableResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_ApplyItemsFromLootTableResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLReward ResultReward;
    
    FR5BLInventory_ApplyItemsFromLootTableResult();
};

