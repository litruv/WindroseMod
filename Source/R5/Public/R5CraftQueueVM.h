#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5CraftQueueVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CraftQueueVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
    UR5CraftQueueVM();

};

