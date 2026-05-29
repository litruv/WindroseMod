#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ShipSelectionModel.generated.h"

class UR5BLItemsCreatorView;
class UR5BLShipOwnerView;
class UR5MVVMObserver_InventoriesAuto;

UCLASS(Blueprintable)
class R5_API UR5ShipSelectionModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipOwnerView* ShipOwnerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLItemsCreatorView* ItemsCreatorView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_InventoriesAuto* InventoriesGroupObserver;
    
public:
    UR5ShipSelectionModel();

};

