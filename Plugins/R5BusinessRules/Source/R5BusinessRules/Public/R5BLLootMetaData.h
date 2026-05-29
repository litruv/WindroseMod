#pragma once
#include "CoreMinimal.h"
#include "R5BLLootTableMetaData.h"
#include "R5BLWeightedOnetimeLootTableMetaData.h"
#include "R5BLLootMetaData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLLootMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLLootTableMetaData> LootTablesMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLWeightedOnetimeLootTableMetaData> WeightedOnetimeLootTablesMetaData;
    
    FR5BLLootMetaData();
};

