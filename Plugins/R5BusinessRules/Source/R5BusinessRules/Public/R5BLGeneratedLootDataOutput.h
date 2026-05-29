#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData.h"
#include "R5BLUpdatedLootTable.h"
#include "R5BLWeightedOnetimeLootTableMetaData.h"
#include "R5BLGeneratedLootDataOutput.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLGeneratedLootDataOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLUpdatedLootTable> UpdatedLootTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLWeightedOnetimeLootTableMetaData> UpdatedWeightedOnetimeLootTables;
    
    FR5BLGeneratedLootDataOutput();
};

