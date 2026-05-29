#include "R5InteractionTargetModel.h"

UR5InteractionTargetModel::UR5InteractionTargetModel()
{
}

void UR5InteractionTargetModel::OnOptionAccessibilityChanged(bool bAccessible)
{
}

UR5Requirement* UR5InteractionTargetModel::GetPrimaryInteractRequirement() const
{
    return nullptr;
}

TArray<UR5InteractionOption*> UR5InteractionTargetModel::GetInteractionOptions() const
{
    return {};
}

FR5RequirementContext UR5InteractionTargetModel::GetRequirementContext() const
{
    return {};
}

AActor* UR5InteractionTargetModel::GetInteractionTargetAvatar() const
{
    return nullptr;
}

FText UR5InteractionTargetModel::GetTargetTitle() const
{
    return {};
}

bool UR5InteractionTargetModel::IsInteractInhibited() const
{
    return false;
}
