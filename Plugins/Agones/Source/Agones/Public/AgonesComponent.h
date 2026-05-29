#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "AgonesErrorDelegateDelegate.h"
#include "AllocateDelegateDelegate.h"
#include "ConnectedDelegateDelegate.h"
#include "DecrementCounterDelegateDelegate.h"
#include "GameServerDelegateDelegate.h"
#include "GameServerResponse.h"
#include "GetConnectedPlayersDelegateDelegate.h"
#include "GetCounterDelegateDelegate.h"
#include "GetPlayerCapacityDelegateDelegate.h"
#include "GetPlayerCountDelegateDelegate.h"
#include "HealthDelegateDelegate.h"
#include "IncrementCounterDelegateDelegate.h"
#include "IsPlayerConnectedDelegateDelegate.h"
#include "PlayerConnectDelegateDelegate.h"
#include "PlayerDisconnectDelegateDelegate.h"
#include "ReadyDelegateDelegate.h"
#include "ReserveDelegateDelegate.h"
#include "SetAnnotationDelegateDelegate.h"
#include "SetCounterCapacityDelegateDelegate.h"
#include "SetCounterCountDelegateDelegate.h"
#include "SetLabelDelegateDelegate.h"
#include "SetPlayerCapacityDelegateDelegate.h"
#include "ShutdownDelegateDelegate.h"
#include "AgonesComponent.generated.h"

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class AGONES_API UAgonesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HttpPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRateSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoConnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectedDelegate ConnectedDelegate;
    
    UAgonesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WatchGameServer(FGameServerDelegate WatchDelegate);
    
    UFUNCTION(BlueprintCallable)
    void Shutdown(FShutdownDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCapacity(int64 Count, FSetPlayerCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FString& Key, const FString& Value, FSetLabelDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterCount(const FString& Key, int64 Count, FSetCounterCountDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterCapacity(const FString& Key, int64 Capacity, FSetCounterCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetAnnotation(const FString& Key, const FString& Value, FSetAnnotationDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void Reserve(int64 Seconds, FReserveDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void Ready(FReadyDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDisconnect(const FString& PlayerId, FPlayerDisconnectDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PlayerConnect(const FString& PlayerId, FPlayerConnectDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void IsPlayerConnected(const FString& PlayerId, FIsPlayerConnectedDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void IncrementCounter(const FString& Key, int64 Amount, FIncrementCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void HealthPing(float RateSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Health(FHealthDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerCount(FGetPlayerCountDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerCapacity(FGetPlayerCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GetCounter(const FString& Key, FGetCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GetConnectedPlayers(FGetConnectedPlayersDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GameServer(FGameServerDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
    UFUNCTION(BlueprintCallable)
    void DecrementCounter(const FString& Key, int64 Amount, FDecrementCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void ConnectSuccess(FGameServerResponse GameServerResponse);
    
public:
    UFUNCTION(BlueprintCallable)
    void Connect();
    
    UFUNCTION(BlueprintCallable)
    void Allocate(FAllocateDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate);
    
};

