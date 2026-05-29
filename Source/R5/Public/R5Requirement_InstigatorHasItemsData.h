#pragma once
#include "CoreMinimal.h"
#include "R5Requirement_InstigatorHasItemsData.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct FR5Requirement_InstigatorHasItemsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> Item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Count;
    
    R5_API FR5Requirement_InstigatorHasItemsData();
};

