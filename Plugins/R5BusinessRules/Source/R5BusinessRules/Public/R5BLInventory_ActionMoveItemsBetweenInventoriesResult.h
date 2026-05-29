#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData.h"
#include "R5BLInventory_ActionMoveItemsBetweenInventoriesResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_ActionMoveItemsBetweenInventoriesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> MovedItems;
    
    FR5BLInventory_ActionMoveItemsBetweenInventoriesResult();
};

