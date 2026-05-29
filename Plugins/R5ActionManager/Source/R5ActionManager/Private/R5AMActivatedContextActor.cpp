#include "R5AMActivatedContextActor.h"
#include "Net/UnrealNetwork.h"
#include "R5AMContextActorComponent.h"

void AR5AMActivatedContextActor::StaticRegisterNativesAR5AMActivatedContextActor()
{
}


AR5AMActivatedContextActor::AR5AMActivatedContextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bDefaultActiveState = false;
    this->bToggleCollisionOnActiveStateChange = true;
    this->bIsForShip = false;
    this->ContextActorComponent = CreateDefaultSubobject<UR5AMContextActorComponent>(TEXT("ContextActorComponent"));
    this->bActiveState = false;
    this->ElementsRoot = NULL;
}

void AR5AMActivatedContextActor::ProcessGameplayTagRPCEvent_Implementation(const FGameplayTag& Tag) {
}

void AR5AMActivatedContextActor::OnRep_StateTag() {
}

void AR5AMActivatedContextActor::OnRep_IsActiveState() {
}

void AR5AMActivatedContextActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5AMActivatedContextActor, StateTag);
    DOREPLIFETIME(AR5AMActivatedContextActor, bActiveState);
}


