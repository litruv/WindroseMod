#pragma once
#include "CoreMinimal.h"
#include "R5InventoryContainerUIData.generated.h"

USTRUCT(BlueprintType)
struct FR5InventoryContainerUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InventoryName;
    
    R5_API FR5InventoryContainerUIData();
};

