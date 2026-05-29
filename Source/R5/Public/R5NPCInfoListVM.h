#pragma once
#include "CoreMinimal.h"
#include "R5NPCListVM.h"
#include "R5NPCInfoListVM.generated.h"

class UR5InventoriesModulesAggregatorComponent;
class UR5MVVMObserver_BuildingCenter;

UCLASS(Blueprintable)
class R5_API UR5NPCInfoListVM : public UR5NPCListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BuildingCenter* BuildingCenterObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InventoriesModulesAggregatorComponent* NPCInventoriesModulesAggregator;
    
public:
    UR5NPCInfoListVM();

};

