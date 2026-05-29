#include "R5AMMovableContextActor.h"
#include "Net/UnrealNetwork.h"
#include "R5AMContextActorComponent.h"

void AR5AMMovableContextActor::StaticRegisterNativesAR5AMMovableContextActor()
{
}


AR5AMMovableContextActor::AR5AMMovableContextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ContextActorComponent = CreateDefaultSubobject<UR5AMContextActorComponent>(TEXT("ContextActorComponent"));
    this->bIsForShip = false;
}

void AR5AMMovableContextActor::OnRep_MovementState() {
}



void AR5AMMovableContextActor::MulticastRPCOnMovementFinished_Implementation() {
}

void AR5AMMovableContextActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5AMMovableContextActor, MovementState);
}


