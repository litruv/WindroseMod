#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5CraftQueueModel.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CraftQueueModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
    UR5CraftQueueModel();

};

