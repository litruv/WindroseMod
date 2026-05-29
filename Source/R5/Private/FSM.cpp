#include "FSM.h"
#include "Net/UnrealNetwork.h"

UFSM::UFSM(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UFSM::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UFSM, CurrentStateID);
}

void UFSM::NetMulticastSwitchState_Implementation(int8 StateId)
{
}

void UFSM::NetMulticastEndState_Implementation(int8 StateId)
{
}

void UFSM::NetMulticastBeginState_Implementation(int8 StateId)
{
}

void UFSM::ClientSwitchState_Implementation(int8 StateId)
{
}

void UFSM::ClientEndState_Implementation(int8 StateId)
{
}

void UFSM::ClientBeginState_Implementation(int8 StateId)
{
}
