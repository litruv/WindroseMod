#include "R5SwitchGameplayEffectsAbility.h"

UR5SwitchGameplayEffectsAbility::UR5SwitchGameplayEffectsAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AwaitedInputActions.AddDefaulted(2);
    this->DefaultIndex = 0;
}

TArray<FR5GameplayEffectsArray> UR5SwitchGameplayEffectsAbility::GetManagedGameplayEffects() const {
    return TArray<FR5GameplayEffectsArray>();
}

int32 UR5SwitchGameplayEffectsAbility::GetActiveGameplayEffectIndex() const {
    return 0;
}


