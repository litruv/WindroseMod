#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Agones -ObjectName=AgonesError -FallbackName=AgonesError
#include "AgonesError.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Agones -ObjectName=ConnectedResponse -FallbackName=ConnectedResponse
#include "ConnectedResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Agones -ObjectName=DisconnectResponse -FallbackName=DisconnectResponse
#include "DisconnectResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Agones -ObjectName=EmptyResponse -FallbackName=EmptyResponse
#include "EmptyResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5AgonesServerComponent.generated.h"

class UAgonesComponent;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5AGONESSERVER_API UR5AgonesServerComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAgonesComponent* AgonesComponent;
    
public:
    UR5AgonesServerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void AgonesSetLabelSuccess(const FEmptyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesSetLabelError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseShutdownSuccess(const FEmptyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseShutdownError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseReserveSuccess(const FEmptyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseReserveError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseReadySuccess(const FEmptyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseReadyError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseDisconnectSuccess(const FDisconnectResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseDisconnectError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseConnectSuccess(const FConnectedResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseConnectError(const FAgonesError& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseAllocateSuccess(const FEmptyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    void AgonesResponseAllocateError(const FAgonesError& Response);
    
};

