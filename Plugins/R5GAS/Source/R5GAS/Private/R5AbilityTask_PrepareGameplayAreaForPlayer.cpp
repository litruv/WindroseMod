#include "R5AbilityTask_PrepareGameplayAreaForPlayer.h"

UR5AbilityTask_PrepareGameplayAreaForPlayer::UR5AbilityTask_PrepareGameplayAreaForPlayer() {
    this->ActivationTimeLimit = 20.00f;
    this->MaxHoldTime = 40.00f;
    this->bUseIntenseOrchestrationProcessing = true;
}

UR5AbilityTask_PrepareGameplayAreaForPlayer* UR5AbilityTask_PrepareGameplayAreaForPlayer::NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Location) {
    return NULL;
}


