#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGCFSMGetActiveStateResult.h"
#include "EGCFSMReplicationOptions.h"
#include "EGCFSMTriggerEventQueuePolicy.h"
#include "EGCFSMTriggerEventTargetPolicy.h"
#include "GCFSMUtilities.generated.h"

class UGCFSMBasicState;
class UGCFSMSnapshot;
class UObject;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGCFSMUtilities();

    UFUNCTION(BlueprintCallable)
    static void TriggerEvent(UObject* stateOrContext, FName EventName, EGCFSMTriggerEventTargetPolicy targetPolicy, bool propagateToSubstates, bool triggerInternalEvents, EGCFSMTriggerEventQueuePolicy queuePolicy, float expireAfter);
    
    UFUNCTION(BlueprintCallable)
    static void ShouldFSMsRunWhileGameIsPaused(UObject* stateOrContext, bool Run);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreFSMSnapshot(UObject* stateOrContext, const UGCFSMSnapshot* Snapshot);
    
    UFUNCTION(BlueprintCallable)
    static void PauseFSMs(UObject* stateOrContext, bool Pause);
    
    UFUNCTION(BlueprintCallable)
    static UGCFSMSnapshot* MakeFSMSnapshot(UObject* stateOrContext);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchFSM(UObject* stateOrContext, FName fsmName, EGCFSMReplicationOptions replicationOptions, UObject* blueprintContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRestoringFSMSnapshot(UObject* stateOrContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFSMRunning(UObject* stateOrContext, FName fsmName);
    
    UFUNCTION(BlueprintCallable)
    static UGCFSMBasicState* GetActiveState(UObject* stateOrContext, FName fsmName, TSoftClassPtr<UGCFSMBasicState> stateSoftClass, EGCFSMGetActiveStateResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool AreFSMsPaused(UObject* stateOrContext);
    
};

