#include "R5Ability_ApplyGEOnTagPresent.h"

UR5Ability_ApplyGEOnTagPresent::UR5Ability_ApplyGEOnTagPresent() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->TargetGEClass = NULL;
}


