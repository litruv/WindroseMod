#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData_V0_9_0.h"
#include "R5BLInventorySlot_V0_9_0.generated.h"

class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventorySlot_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventorySlotParams> SlotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsStackData_V0_9_0 ItemsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPersonalSlot;
    
    FR5BLInventorySlot_V0_9_0();
};

