#include "R5AS_AwarenessComponent.h"
#include "Net/UnrealNetwork.h"

UR5AS_AwarenessComponent::UR5AS_AwarenessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Params = NULL;
}

void UR5AS_AwarenessComponent::OnRep_AlertTargets() {
}

void UR5AS_AwarenessComponent::OnRep_AggressionTargets() {
}

TArray<UR5ThreatComponent*> UR5AS_AwarenessComponent::GetThreats() const {
    return TArray<UR5ThreatComponent*>();
}

UR5AS_AwarenessComponent* UR5AS_AwarenessComponent::GetAwarenessComponent(const AActor* Actor) {
    return NULL;
}

TArray<AActor*> UR5AS_AwarenessComponent::GetAlertTargets() const {
    return TArray<AActor*>();
}

TArray<AActor*> UR5AS_AwarenessComponent::GetAggressiveTargets() const {
    return TArray<AActor*>();
}

void UR5AS_AwarenessComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AS_AwarenessComponent, AggressionTargets);
    DOREPLIFETIME(UR5AS_AwarenessComponent, AlertTargets);
    DOREPLIFETIME(UR5AS_AwarenessComponent, IndirectAggressiveTargets);
}


