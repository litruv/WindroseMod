#pragma once
#include "CoreMinimal.h"
#include "R5NoInventoryEquipmentItem.h"
#include "R5NoInventoryDefaultItemsData.generated.h"

USTRUCT(BlueprintType)
struct FR5NoInventoryDefaultItemsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NoInventoryEquipmentItem> DefaultItems;
    
    R5_API FR5NoInventoryDefaultItemsData();
};

