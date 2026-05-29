#include "R5Ability_SetEffects.h"

UR5Ability_SetEffects::UR5Ability_SetEffects() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}


