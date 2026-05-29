#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5NoInventoryEquipmentItem.generated.h"

class UR5EquipmentItem;

USTRUCT(BlueprintType)
struct FR5NoInventoryEquipmentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5EquipmentItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotTypeBitmask;
    
    R5_API FR5NoInventoryEquipmentItem();
};

