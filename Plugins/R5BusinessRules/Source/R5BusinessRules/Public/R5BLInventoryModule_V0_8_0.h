#pragma once
#include "CoreMinimal.h"
#include "R5BLAdditionalSlotData_V0_8_0.h"
#include "R5BLInventoryModuleParams_V0_8_0.h"
#include "R5BLInventorySlot_V0_8_0.h"
#include "R5BLInventoryModule_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryModule_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventoryModuleParams_V0_8_0 ModuleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLInventorySlot_V0_8_0> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLAdditionalSlotData_V0_8_0> AdditionalSlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPersonalModule;
    
    FR5BLInventoryModule_V0_8_0();
};

