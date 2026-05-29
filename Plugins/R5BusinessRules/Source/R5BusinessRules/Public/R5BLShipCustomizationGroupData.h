#pragma once
#include "CoreMinimal.h"
#include "R5BLShipCustomizationItemData.h"
#include "R5BLShipCustomizationGroupData.generated.h"

class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipCustomizationGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventorySlotParams> CustomizationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLShipCustomizationItemData> CustomizationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GroupName;
    
    FR5BLShipCustomizationGroupData();
};

