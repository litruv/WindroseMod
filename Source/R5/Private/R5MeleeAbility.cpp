#include "R5MeleeAbility.h"

TSubclassOf<UGameplayEffect> UR5MeleeAbility::GetPerfectBlockGE() const
{
    return {};
}

void UR5MeleeAbility::OnNetSyncStartRotation(const FGameplayEventData& EventData)
{
}

void UR5MeleeAbility::ApplyPerAttackCost()
{
}

void UR5MeleeAbility::PerfectBlock()
{
}

void UR5MeleeAbility::Combo(ER5AttackType InputType, bool bFromJumpEnabled)
{
}

void UR5MeleeAbility::MeleeHit(FGameplayAbilityTargetDataHandle TargetDataHandle)
{
}

TSubclassOf<UGameplayEffect> UR5MeleeAbility::GetMovementBlockGE() const
{
    return {};
}

UAnimMontage* UR5MeleeAbility::GetPerfectBlockAnimMontage() const
{
    return nullptr;
}

bool UR5MeleeAbility::ShouldIgnorePerfectBlock() const
{
    return false;
}

UR5MeleeAbility::UR5MeleeAbility()
{
}
