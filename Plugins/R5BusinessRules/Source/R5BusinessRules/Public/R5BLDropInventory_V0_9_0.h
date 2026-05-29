#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData_V0_9_0.h"
#include "R5BLDropInventory_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDropInventory_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData_V0_9_0> ItemsToDrop;
    
    FR5BLDropInventory_V0_9_0();
};

