#pragma once
#include "CoreMinimal.h"
#include "R5ItemAmount.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct R5_API FR5ItemAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Count;
    
    FR5ItemAmount();
};

