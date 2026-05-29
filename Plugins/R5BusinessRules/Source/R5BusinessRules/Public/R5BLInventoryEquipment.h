#pragma once
#include "CoreMinimal.h"
#include "R5BLInventoryEquipment.generated.h"

class UR5BLEquipmentItemConfig;
class UR5BLSlotCountModifierParams;
class UR5JsonRuntimeDA;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLEquipmentItemConfig> ItemConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLSlotCountModifierParams> SlotCountModifierParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5JsonRuntimeDA> ShipItemParams;
    
    FR5BLInventoryEquipment();
};

