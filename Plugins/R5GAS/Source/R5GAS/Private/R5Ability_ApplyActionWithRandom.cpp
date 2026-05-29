#include "R5Ability_ApplyActionWithRandom.h"

UR5Ability_ApplyActionWithRandom::UR5Ability_ApplyActionWithRandom() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->Params = NULL;
    this->RandomTask = NULL;
}


