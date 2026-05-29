#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ShipEffectsServiceModel.generated.h"

class UR5MVVMObserver_Ship;
class UR5MVVMObserver_ShipDockInventories;

UCLASS(Blueprintable)
class R5_API UR5ShipEffectsServiceModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipDockInventories* DockInventoriesObserver;
    
public:
    UR5ShipEffectsServiceModel();

};

