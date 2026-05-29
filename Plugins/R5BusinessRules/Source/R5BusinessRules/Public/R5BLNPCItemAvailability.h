#pragma once
#include "CoreMinimal.h"
#include "ER5BLEquipNPCAvailability.h"
#include "R5BLItem.h"
#include "R5BLNPCItemAvailability.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLNPCItemAvailability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLEquipNPCAvailability AvailableToEquip;
    
    FR5BLNPCItemAvailability();
};

