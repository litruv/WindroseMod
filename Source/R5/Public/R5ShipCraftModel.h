#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ShipCraftModel.generated.h"

class UR5MVVMObserver_InventoriesAuto;

UCLASS(Blueprintable)
class R5_API UR5ShipCraftModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_InventoriesAuto* InventoriesGroupObserver;
    
public:
    UR5ShipCraftModel();

};

