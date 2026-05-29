#pragma once
#include "CoreMinimal.h"
#include "R5BLBlockByActionTypeData.h"
#include "R5BLBlockByOperationTypeData.h"
#include "R5BLBlockInventoryOperationsData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLBlockInventoryOperationsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBlockByOperationTypeData> BlockedByInventoryOperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBlockByActionTypeData> BlockedByInventoryActionType;
    
    FR5BLBlockInventoryOperationsData();
};

