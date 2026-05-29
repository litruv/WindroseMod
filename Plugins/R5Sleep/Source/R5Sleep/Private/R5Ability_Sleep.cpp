#include "R5Ability_Sleep.h"

UR5Ability_Sleep::UR5Ability_Sleep() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
}


