#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "GCFSM.generated.h"

class UGCFSMBasicState;
class UGCFSMReplicationComponent;
class UGCFSMSnapshot;

UCLASS(Blueprintable)
class GCFSM_API UGCFSM : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGCFSMBasicState* activeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGCFSMReplicationComponent* replicationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UGCFSMSnapshot*> stateHistories;
    
public:
    UGCFSM();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ReplicationWaitFunction(FName& stateOrStop, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void EnterState(UGCFSMBasicState* State, FGuid NodeGuid, FLatentActionInfo LatentInfo, FName& EventName, float& DeltaTime, const TArray<FName>& processedEvents, int32 numTransitions);
    
};

