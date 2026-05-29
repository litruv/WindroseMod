#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLDropInventory_MoveItemsToDropInventory.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDropInventory_MoveItemsToDropInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath SlotPath;
    
    FR5BLDropInventory_MoveItemsToDropInventory();
};

