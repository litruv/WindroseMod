#pragma once
#include "CoreMinimal.h"
#include "R5BLAdditionalSlotData.h"
#include "R5BLInventoryModuleParams.h"
#include "R5BLInventorySlot.h"
#include "R5BLInventoryModule.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventoryModuleParams ModuleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLInventorySlot> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLAdditionalSlotData> AdditionalSlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPersonalModule;
    
    FR5BLInventoryModule();
};

