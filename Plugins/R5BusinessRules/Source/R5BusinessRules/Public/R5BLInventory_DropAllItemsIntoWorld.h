#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLCommonDropDataModel.h"
#include "R5BLInventory_DropAllItemsIntoWorld.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventory_DropAllItemsIntoWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCommonDropDataModel CommonDropDataModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath InventoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateSlotsCount;
    
    FR5BLInventory_DropAllItemsIntoWorld();
};

