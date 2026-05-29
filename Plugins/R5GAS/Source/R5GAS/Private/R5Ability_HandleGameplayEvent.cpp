#include "R5Ability_HandleGameplayEvent.h"

UR5Ability_HandleGameplayEvent::UR5Ability_HandleGameplayEvent() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
}


