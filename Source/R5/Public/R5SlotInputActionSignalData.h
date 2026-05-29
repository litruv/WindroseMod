#pragma once
#include "CoreMinimal.h"
#include "ER5InventorySlotListSource.h"
#include "R5SlotInputActionSignalData.generated.h"

class UR5BLInventorySlotView;

USTRUCT(BlueprintType)
struct FR5SlotInputActionSignalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventorySlotView* TargetSlotView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5InventorySlotListSource SlotSourceType;
    
    R5_API FR5SlotInputActionSignalData();
};

