#include "AgonesComponent.h"

UAgonesComponent::UAgonesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HttpPort = TEXT("9358");
    this->HealthRateSeconds = 10.00f;
    this->bDisableAutoConnect = false;
}

void UAgonesComponent::WatchGameServer(FGameServerDelegate WatchDelegate) {
}

void UAgonesComponent::Shutdown(FShutdownDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::SetPlayerCapacity(int64 Count, FSetPlayerCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::SetLabel(const FString& Key, const FString& Value, FSetLabelDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::SetCounterCount(const FString& Key, int64 Count, FSetCounterCountDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::SetCounterCapacity(const FString& Key, int64 Capacity, FSetCounterCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::SetAnnotation(const FString& Key, const FString& Value, FSetAnnotationDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::Reserve(int64 Seconds, FReserveDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::Ready(FReadyDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::PlayerDisconnect(const FString& PlayerId, FPlayerDisconnectDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::PlayerConnect(const FString& PlayerId, FPlayerConnectDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::IsPlayerConnected(const FString& PlayerId, FIsPlayerConnectedDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::IncrementCounter(const FString& Key, int64 Amount, FIncrementCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::HealthPing(float RateSeconds) {
}

void UAgonesComponent::Health(FHealthDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::GetPlayerCount(FGetPlayerCountDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::GetPlayerCapacity(FGetPlayerCapacityDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::GetCounter(const FString& Key, FGetCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::GetConnectedPlayers(FGetConnectedPlayersDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::GameServer(FGameServerDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::DecrementCounter(const FString& Key, int64 Amount, FDecrementCounterDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}

void UAgonesComponent::ConnectSuccess(FGameServerResponse GameServerResponse) {
}

void UAgonesComponent::Connect() {
}

void UAgonesComponent::Allocate(FAllocateDelegate SuccessDelegate, FAgonesErrorDelegate ErrorDelegate) {
}


