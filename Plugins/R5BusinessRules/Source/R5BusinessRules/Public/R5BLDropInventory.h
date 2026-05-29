#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData.h"
#include "R5BLDropInventory.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDropInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> ItemsToDrop;
    
    FR5BLDropInventory();
};

