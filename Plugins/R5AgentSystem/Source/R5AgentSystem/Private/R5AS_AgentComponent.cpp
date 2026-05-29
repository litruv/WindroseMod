#include "R5AS_AgentComponent.h"

UR5AS_AgentComponent::UR5AS_AgentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Params = NULL;
}

void UR5AS_AgentComponent::Reset() {
}

UR5AS_AgentComponent* UR5AS_AgentComponent::GetAgentComponent(const AActor* Actor) {
    return NULL;
}

void UR5AS_AgentComponent::AddCategories(UR5AS_AgentComponent* Agent, const FGameplayTagContainer& CategoryTags, float HoldTime) {
}

void UR5AS_AgentComponent::AddAgent(UR5AS_AgentComponent* AddedAgent, float MinHoldTime, float Delay) {
}


