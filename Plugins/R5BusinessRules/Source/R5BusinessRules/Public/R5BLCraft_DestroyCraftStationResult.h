#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData.h"
#include "R5BLCraft_DestroyCraftStationResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCraft_DestroyCraftStationResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> MovedItems;
    
    FR5BLCraft_DestroyCraftStationResult();
};

