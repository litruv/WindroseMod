#pragma once
#include "CoreMinimal.h"
#include "R5BLInventorySlotPosition.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventorySlotPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotId;
    
    FR5BLInventorySlotPosition();
};

