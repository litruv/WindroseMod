#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "NamedGuid.h"
#include "GCFSMReplicationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GCFSM_API UGCFSMReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool deferProxyInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveFSMs, meta=(AllowPrivateAccess=true))
    TArray<FNamedGuid> activeFSMs;
    
public:
    UGCFSMReplicationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveFSMs();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUpdateFSM(const TArray<FName>& fsmPathName, FName exitEvent, const FGuid& activeStateGuid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopFSM(const TArray<FName>& fsmPathName, FName exitEvent);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeProxyInitialization();
    
};

