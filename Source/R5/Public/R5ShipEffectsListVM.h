#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5ShipEffectsListVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipEffectsListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
    UR5ShipEffectsListVM();

};

