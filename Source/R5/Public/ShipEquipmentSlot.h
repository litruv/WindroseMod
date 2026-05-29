#pragma once
#include "CoreMinimal.h"
#include "ShipEquipmentSlot.generated.h"

class UR5BLInventorySlotView;

USTRUCT(BlueprintType)
struct FShipEquipmentSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventorySlotView* SlotView;
    
    R5_API FShipEquipmentSlot();
};

