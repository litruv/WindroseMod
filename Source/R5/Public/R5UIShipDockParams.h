#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5UIShipDockParams.generated.h"

class UR5UIShipManageParams;

UCLASS(Blueprintable)
class R5_API UR5UIShipDockParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIShipManageParams* ShipManageParams;
    
    UR5UIShipDockParams();

};

