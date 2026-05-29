#pragma once
#include "CoreMinimal.h"
#include "FoliageLootData.h"
#include "FoliageLootTableData.generated.h"

USTRUCT(BlueprintType)
struct FFoliageLootTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoliageLootData> Items;
    
    R5_API FFoliageLootTableData();
};

