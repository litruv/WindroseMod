#pragma once
#include "CoreMinimal.h"
#include "R5NoInventoryDefaultItemsData.h"
#include "R5NoInventoryEquipmentData.generated.h"

USTRUCT(BlueprintType)
struct FR5NoInventoryEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NoInventoryDefaultItemsData DefaultItemsData;
    
    R5_API FR5NoInventoryEquipmentData();
};

