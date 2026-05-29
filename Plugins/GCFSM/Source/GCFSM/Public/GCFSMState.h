#pragma once
#include "CoreMinimal.h"
#include "EGCFSMReplicatedExec.h"
#include "EGCFSMReplicationOptions.h"
#include "GCFSMBasicState.h"
#include "GCFSMState.generated.h"

class UGCFSM;
class UGCFSMRootState;
class UGCFSMState;

UCLASS(Blueprintable, HideDropdown)
class GCFSM_API UGCFSMState : public UGCFSMBasicState {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGCFSMRootState* RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UGCFSM*> FSMs;
    
public:
    UGCFSMState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(FName Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter();
    
public:
    UFUNCTION(BlueprintCallable)
    static UGCFSMState* MakeStateObject(UGCFSM* FSM, TSoftClassPtr<UGCFSMState> implementationSoftClass, bool processTickEvent, float Timeout, const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    UGCFSM* MakeFSM(FName fsmName, EGCFSMReplicationOptions replicationOptions, EGCFSMReplicatedExec& exec);
    
private:
    UFUNCTION(BlueprintCallable)
    void InternalEventEntryPoint(float Age);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetFSMDebugInfo() const;
    
};

