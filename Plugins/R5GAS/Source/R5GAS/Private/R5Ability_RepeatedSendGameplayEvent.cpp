#include "R5Ability_RepeatedSendGameplayEvent.h"

UR5Ability_RepeatedSendGameplayEvent::UR5Ability_RepeatedSendGameplayEvent() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}


