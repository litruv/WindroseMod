#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLCommonDropDataModel.h"
#include "R5BLDropInventory_DropExtraItems.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDropInventory_DropExtraItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCommonDropDataModel CommonDropDataModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath DropInventoryPath;
    
    FR5BLDropInventory_DropExtraItems();
};

