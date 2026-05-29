#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5AMContextActorInterface.h"
#include "R5AMActivatedContextActor.generated.h"

class UR5AMContextActorComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5ACTIONMANAGER_API AR5AMActivatedContextActor : public AR5InstantiableActor, public IR5AMContextActorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, bool, bInIsActiveState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayTagRecieved, FGameplayTag, CurrentState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayTagRecieved OnGameplayTagRecieved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleCollisionOnActiveStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AMContextActorComponent* ContextActorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StateTag, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsActiveState, meta=(AllowPrivateAccess=true))
    bool bActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ElementsRoot;
    
public:
    AR5AMActivatedContextActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ProcessGameplayTagRPCEvent(const FGameplayTag& Tag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StateTag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActiveState();
    

    // Fix for true pure virtual functions not being implemented
};

