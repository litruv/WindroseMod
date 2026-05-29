#include "R5Ability_ConsecutiveTagEvents.h"

UR5Ability_ConsecutiveTagEvents::UR5Ability_ConsecutiveTagEvents() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}


