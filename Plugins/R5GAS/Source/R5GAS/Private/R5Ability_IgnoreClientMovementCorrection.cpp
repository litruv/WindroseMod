#include "R5Ability_IgnoreClientMovementCorrection.h"

UR5Ability_IgnoreClientMovementCorrection::UR5Ability_IgnoreClientMovementCorrection() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
}


