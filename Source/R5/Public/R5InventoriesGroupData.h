#pragma once
#include "CoreMinimal.h"
#include "R5InventoriesGroupData.generated.h"

USTRUCT(BlueprintType)
struct FR5InventoriesGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SourceInventoriesGroup;
    
    R5_API FR5InventoriesGroupData();
};

