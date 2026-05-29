#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_Inventories.generated.h"

class UR5BLInventoriesCompositeView;
class UR5BLInventoryView;
class UR5ProximityStorageComponent;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_Inventories : public UR5MVVMObserver {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProximityStorageComponent* ProximityStorageComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5BLInventoryView*> Inventories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoriesCompositeView* InventoriesInfoView;
    
public:
    UR5MVVMObserver_Inventories();

protected:
    UFUNCTION(BlueprintCallable)
    void OnProximityUpdated();
    
};

