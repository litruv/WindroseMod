#pragma once
#include "CoreMinimal.h"
#include "R5BLInventoryModuleDynamicData_V0_8_0.generated.h"

class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryModuleDynamicData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventorySlotParams> ExtendSlotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendCountSlots;
    
    FR5BLInventoryModuleDynamicData_V0_8_0();
};

