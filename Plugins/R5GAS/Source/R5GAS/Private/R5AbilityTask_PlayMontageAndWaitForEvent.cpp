#include "R5AbilityTask_PlayMontageAndWaitForEvent.h"

UR5AbilityTask_PlayMontageAndWaitForEvent::UR5AbilityTask_PlayMontageAndWaitForEvent() {
    this->MontageToPlay = NULL;
    this->Rate = 1.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->bStopWhenAbilityEnds = true;
}

UR5AbilityTask_PlayMontageAndWaitForEvent* UR5AbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, FGameplayTagContainer NewEventTags, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale) {
    return NULL;
}


