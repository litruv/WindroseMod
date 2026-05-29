#include "R5Ability_UseDefaultInstancedTask.h"

UR5Ability_UseDefaultInstancedTask::UR5Ability_UseDefaultInstancedTask() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Params = NULL;
}

void UR5Ability_UseDefaultInstancedTask::OnMontageInterrupted() {
}

void UR5Ability_UseDefaultInstancedTask::OnMontageFinished() {
}


