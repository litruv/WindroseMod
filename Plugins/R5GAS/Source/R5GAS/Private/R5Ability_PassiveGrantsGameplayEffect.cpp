#include "R5Ability_PassiveGrantsGameplayEffect.h"

UR5Ability_PassiveGrantsGameplayEffect::UR5Ability_PassiveGrantsGameplayEffect() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->GEClass = NULL;
}


