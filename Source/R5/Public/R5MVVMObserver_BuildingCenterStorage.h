#pragma once
#include "CoreMinimal.h"
#include "R5MVVMObserver_BuildingCenter.h"
#include "R5MVVMObserver_BuildingCenterStorage.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_BuildingCenterStorage : public UR5MVVMObserver_BuildingCenter {
    GENERATED_BODY()
public:
    UR5MVVMObserver_BuildingCenterStorage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBuildingStorageStateUpdated();
    
};

