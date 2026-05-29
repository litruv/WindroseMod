#include "R5Ability_TriggerGrantsGameplayEffectAbility.h"

UR5Ability_TriggerGrantsGameplayEffectAbility::UR5Ability_TriggerGrantsGameplayEffectAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->Params = NULL;
}


