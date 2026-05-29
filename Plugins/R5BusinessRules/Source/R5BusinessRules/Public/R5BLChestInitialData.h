#pragma once
#include "CoreMinimal.h"
#include "R5BLChestInitialData.generated.h"

class AActor;
class UR5BLDefaultInventoryItemsParams;
class UR5BLInventoryParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLChestInitialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryParams> InventoryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLDefaultInventoryItemsParams> OptionalDefaultInventoryItemsParams;
    
    FR5BLChestInitialData();
};

