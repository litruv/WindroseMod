#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLChest_CreateFromDropInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLChest_CreateFromDropInventoryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ChestId;
    
    FR5BLChest_CreateFromDropInventoryResult();
};

