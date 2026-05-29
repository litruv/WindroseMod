#pragma once
#include "CoreMinimal.h"
#include "ER5ProximityChannel.h"
#include "R5UIShipProximityData.generated.h"

USTRUCT(BlueprintType)
struct FR5UIShipProximityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ProximityChannel ProximityChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedStatusForManageShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedStatusForEquipmentInventoryModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedStatusForDefaultInventoryModule;
    
    R5_API FR5UIShipProximityData();
};

