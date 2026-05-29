#include "R5AgonesServerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Agones -ObjectName=AgonesComponent -FallbackName=AgonesComponent
#include "AgonesComponent.h"

UR5AgonesServerComponent::UR5AgonesServerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AgonesComponent = CreateDefaultSubobject<UAgonesComponent>(TEXT("AgonesComponent"));
}

void UR5AgonesServerComponent::AgonesSetLabelSuccess(const FEmptyResponse& Response) {
}

void UR5AgonesServerComponent::AgonesSetLabelError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseShutdownSuccess(const FEmptyResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseShutdownError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseReserveSuccess(const FEmptyResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseReserveError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseReadySuccess(const FEmptyResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseReadyError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseDisconnectSuccess(const FDisconnectResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseDisconnectError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseConnectSuccess(const FConnectedResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseConnectError(const FAgonesError& Response) {
}

void UR5AgonesServerComponent::AgonesResponseAllocateSuccess(const FEmptyResponse& Response) {
}

void UR5AgonesServerComponent::AgonesResponseAllocateError(const FAgonesError& Response) {
}


