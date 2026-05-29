#include "R5ActorRegistratorComponentDec2024.h"

UR5ActorRegistratorComponentDec2024::UR5ActorRegistratorComponentDec2024(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRegisterOnClient = false;
}

void UR5ActorRegistratorComponentDec2024::OnActorDeath(AActor* Actor) {
}


