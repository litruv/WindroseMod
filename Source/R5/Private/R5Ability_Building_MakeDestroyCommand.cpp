#include "R5Ability_Building_MakeDestroyCommand.h"

void UR5Ability_Building_MakeDestroyCommand::OnDestroyInput(const FInputActionInstance& InputActionInstance)
{
}

void UR5Ability_Building_MakeDestroyCommand::Destroy(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
}

bool UR5Ability_Building_MakeDestroyCommand::HasFocusedBlock() const
{
    return false;
}

void UR5Ability_Building_MakeDestroyCommand::OnTargetBlockChanged(AR5BuildingBlock* BuildingBlock)
{
}

UR5Ability_Building_MakeDestroyCommand::UR5Ability_Building_MakeDestroyCommand()
{
}
