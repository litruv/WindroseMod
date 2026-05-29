#include "R5Ability_HandleGameplayEventForConsecutiveHits.h"

UR5Ability_HandleGameplayEventForConsecutiveHits::UR5Ability_HandleGameplayEventForConsecutiveHits() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->bActivateAbilityOnGranted = true;
    this->Params = NULL;
}

void UR5Ability_HandleGameplayEventForConsecutiveHits::OnDamageDealt(AActor* TargetActor, float IncomingDamage, float DealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& EffectSpec) {
}


