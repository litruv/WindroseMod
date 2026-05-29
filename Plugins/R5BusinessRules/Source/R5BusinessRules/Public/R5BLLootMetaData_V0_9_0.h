#pragma once
#include "CoreMinimal.h"
#include "R5BLLootTableMetaData_V0_9_0.h"
#include "R5BLWeightedOnetimeLootTableMetaData_V0_9_0.h"
#include "R5BLLootMetaData_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLLootMetaData_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLLootTableMetaData_V0_9_0> LootTablesMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLWeightedOnetimeLootTableMetaData_V0_9_0> WeightedOnetimeLootTablesMetaData;
    
    FR5BLLootMetaData_V0_9_0();
};

