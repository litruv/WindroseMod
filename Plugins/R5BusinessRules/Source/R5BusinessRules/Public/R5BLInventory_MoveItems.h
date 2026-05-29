#pragma once
#include "CoreMinimal.h"
#include "R5BLInventoriesMoveItemsModel.h"
#include "R5BLInventory_MoveItems.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_MoveItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventoriesMoveItemsModel MetaModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLInventory_MoveItems();
};

