#pragma once
#include "CoreMinimal.h"
#include "R5BLTouchedItemInfo.h"
#include "R5BLInventoryMetadata.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLTouchedItemInfo> WasTouchedItems;
    
    FR5BLInventoryMetadata();
};

