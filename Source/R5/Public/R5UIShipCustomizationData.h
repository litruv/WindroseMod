#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLShipCustomizationItemData -FallbackName=R5BLShipCustomizationItemData
#include "R5BLShipCustomizationItemData.h"
#include "R5UIShipCustomizationData.generated.h"

class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct FR5UIShipCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UR5BLInventorySlotParams>, FR5BLShipCustomizationItemData> EmptyCustomizationSlotBySlot;
    
    R5_API FR5UIShipCustomizationData();
};

