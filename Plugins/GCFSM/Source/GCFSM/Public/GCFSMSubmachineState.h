#pragma once
#include "CoreMinimal.h"
#include "EGCFSMSubmachineReplicationOptions.h"
#include "GCFSMState.h"
#include "GCFSMSubmachineState.generated.h"

class UGCFSM;
class UGCFSMSubmachineState;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMSubmachineState : public UGCFSMState {
    GENERATED_BODY()
public:
    UGCFSMSubmachineState();

    UFUNCTION(BlueprintCallable)
    static UGCFSMSubmachineState* MakeSubmachineStateObject(UGCFSM* FSM, FName submachineName, EGCFSMSubmachineReplicationOptions replicationOptions, bool processTickEvent, float Timeout, const FString& StateName);
    
};

