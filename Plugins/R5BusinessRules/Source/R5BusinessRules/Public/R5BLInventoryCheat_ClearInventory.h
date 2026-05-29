#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLInventoryCheat_ClearInventory.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryCheat_ClearInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath InventoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreAllModulesCleared;
    
    FR5BLInventoryCheat_ClearInventory();
};

