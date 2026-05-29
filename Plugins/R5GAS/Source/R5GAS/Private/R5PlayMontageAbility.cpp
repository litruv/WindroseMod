#include "R5PlayMontageAbility.h"

UR5PlayMontageAbility::UR5PlayMontageAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Params = NULL;
    this->WaitDelayTask = NULL;
    this->PlayAnimMontageTask = NULL;
}

void UR5PlayMontageAbility::MontageInterrupted() {
}

void UR5PlayMontageAbility::MontageFinished() {
}

void UR5PlayMontageAbility::FinishAbility() {
}


