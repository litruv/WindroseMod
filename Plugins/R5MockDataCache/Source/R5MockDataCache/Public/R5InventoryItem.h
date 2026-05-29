#pragma once
#include "CoreMinimal.h"
#include "R5InventoryItem.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct R5MOCKDATACACHE_API FR5InventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> ItemDescription;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLInventoryItem* InventoryItem;
    
public:
    FR5InventoryItem();
};

