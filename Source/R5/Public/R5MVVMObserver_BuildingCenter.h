#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_BuildingCenter.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_BuildingCenter : public UR5MVVMObserver {
    GENERATED_BODY()
public:
    UR5MVVMObserver_BuildingCenter();

};

