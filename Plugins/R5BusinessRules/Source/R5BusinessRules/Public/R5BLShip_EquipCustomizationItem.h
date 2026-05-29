#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLShip_EquipCustomizationItem.generated.h"

class UR5BLInventoryItem;
class UR5BLInventorySlotParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShip_EquipCustomizationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ShipId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath ShipInventoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath SourceInventoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> ItemToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventorySlotParams> CustomizationSlotParams;
    
    FR5BLShip_EquipCustomizationItem();
};

