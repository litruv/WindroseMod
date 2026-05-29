#pragma once
#include "CoreMinimal.h"
#include "R5DigNodeResource.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct R5_API FR5DigNodeResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> Item;
    
    FR5DigNodeResource();
};

