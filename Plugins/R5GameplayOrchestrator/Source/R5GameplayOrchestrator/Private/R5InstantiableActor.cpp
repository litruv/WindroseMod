#include "R5InstantiableActor.h"
#include "Net/UnrealNetwork.h"

void AR5InstantiableActor::StaticRegisterNativesAR5InstantiableActor()
{
}


AR5InstantiableActor::AR5InstantiableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicatedShouldRegisterInInstancer = false;
    this->bReplicatedDynamicActor = false;
}

void AR5InstantiableActor::MarkAsCompletelyDestroyed_Implementation() {
}

void AR5InstantiableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5InstantiableActor, bReplicatedShouldRegisterInInstancer);
    DOREPLIFETIME(AR5InstantiableActor, bReplicatedDynamicActor);
    DOREPLIFETIME(AR5InstantiableActor, ReplicatedBLRecordId);
}


