#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "GCFSMBasicState.generated.h"

class UGCFSM;
class UGCFSMBasicState;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMBasicState : public UObject {
    GENERATED_BODY()
public:
    UGCFSMBasicState();

    UFUNCTION(BlueprintCallable)
    static UGCFSMBasicState* MakeBasicStateObject(UGCFSM* FSM, bool processTickEvent, float Timeout, const FString& StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTimeOutEventName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveTime() const;
    
};

