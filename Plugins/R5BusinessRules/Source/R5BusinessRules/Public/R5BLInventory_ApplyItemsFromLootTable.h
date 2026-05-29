#pragma once
#include "CoreMinimal.h"
#include "R5BLApplyItemsFromLootTableModel.h"
#include "R5BLInventory_ApplyItemsFromLootTable.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_ApplyItemsFromLootTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLApplyItemsFromLootTableModel Model;
    
    FR5BLInventory_ApplyItemsFromLootTable();
};

