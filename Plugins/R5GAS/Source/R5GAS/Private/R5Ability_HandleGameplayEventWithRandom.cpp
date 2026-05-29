#include "R5Ability_HandleGameplayEventWithRandom.h"

UR5Ability_HandleGameplayEventWithRandom::UR5Ability_HandleGameplayEventWithRandom() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->Params = NULL;
}


