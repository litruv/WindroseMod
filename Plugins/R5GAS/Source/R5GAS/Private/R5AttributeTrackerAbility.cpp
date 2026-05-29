#include "R5AttributeTrackerAbility.h"

UR5AttributeTrackerAbility::UR5AttributeTrackerAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bServerRespectsRemoteAbilityCancellation = false;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}


