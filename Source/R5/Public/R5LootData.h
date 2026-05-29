#pragma once
#include "CoreMinimal.h"
#include "R5LootData.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct FR5LootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    R5_API FR5LootData();
};

