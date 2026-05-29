#include "R5Ability_NoDamageHandleGameplayEvent.h"

UR5Ability_NoDamageHandleGameplayEvent::UR5Ability_NoDamageHandleGameplayEvent() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}


