#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "FSM.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSM : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 CurrentStateID;
    
public:
    UFSM(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticastSwitchState(int8 StateId);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticastEndState(int8 StateId);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticastBeginState(int8 StateId);
    
    UFUNCTION(Client, Reliable)
    void ClientSwitchState(int8 StateId);
    
    UFUNCTION(Client, Reliable)
    void ClientEndState(int8 StateId);
    
    UFUNCTION(Client, Reliable)
    void ClientBeginState(int8 StateId);
    
};

