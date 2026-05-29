#pragma once
#include "CoreMinimal.h"
#include "GCFSMBasicState.h"
#include "GCFSMLocalState.generated.h"

class UGCFSM;
class UGCFSMLocalState;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMLocalState : public UGCFSMBasicState {
    GENERATED_BODY()
public:
    UGCFSMLocalState();

    UFUNCTION(BlueprintCallable)
    static UGCFSMLocalState* MakeLocalStateObject(UGCFSM* FSM, const FString& localStatePrefix, bool processTickEvent, float Timeout, const FString& StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGraphName() const;
    
};

