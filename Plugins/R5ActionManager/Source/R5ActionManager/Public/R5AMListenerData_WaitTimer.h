#pragma once
#include "CoreMinimal.h"
#include "R5AMListenerData_WaitTimer.generated.h"

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMListenerData_WaitTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FR5AMListenerData_WaitTimer();
};

