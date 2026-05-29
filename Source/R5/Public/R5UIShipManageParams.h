#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5InventoriesGroupData.h"
#include "R5UIShipCustomizationData.h"
#include "R5UIShipProximityData.h"
#include "R5UIShipServiceData.h"
#include "R5UIShipManageParams.generated.h"

class UR5InventoriesScreenParams;

UCLASS(Blueprintable)
class R5_API UR5UIShipManageParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UIShipProximityData ProximityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5InventoriesGroupData InventoriesGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UIShipCustomizationData ShipCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UIShipServiceData ShipServiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InventoriesScreenParams* ShipInventoriesParams;
    
    UR5UIShipManageParams();

};

