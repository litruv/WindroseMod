#pragma once
#include "CoreMinimal.h"
#include "R5BLTouchedItemInfo_V0_8_0.h"
#include "R5BLInventoryMetadata_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryMetadata_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLTouchedItemInfo_V0_8_0> WasTouchedItems;
    
    FR5BLInventoryMetadata_V0_8_0();
};

