#pragma once
#include "CoreMinimal.h"
#include "R5BLInventorySlotsData_V0_8_0.generated.h"

class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventorySlotsData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventorySlotParams> SlotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountSlots;
    
    FR5BLInventorySlotsData_V0_8_0();
};

