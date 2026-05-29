#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MVVMEventBatcher.generated.h"

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMEventBatcher : public UObject {
    GENERATED_BODY()
public:
    UR5MVVMEventBatcher();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBatchTimerFinished();
    
};

