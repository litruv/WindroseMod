#pragma once
#include "CoreMinimal.h"
#include "R5AMListener_Base.h"
#include "R5AMListener_WaitTimer.generated.h"

UCLASS(Blueprintable)
class R5ACTIONMANAGER_API UR5AMListener_WaitTimer : public UR5AMListener_Base {
    GENERATED_BODY()
public:
    UR5AMListener_WaitTimer();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
};

