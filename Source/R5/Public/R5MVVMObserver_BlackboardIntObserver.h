#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_BlackboardIntObserver.generated.h"

class UR5UIScenarioBlackboardIntObserver;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_BlackboardIntObserver : public UR5MVVMObserver {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIScenarioBlackboardIntObserver* Observer;
    
public:
    UR5MVVMObserver_BlackboardIntObserver();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObservedValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver);
    
};

