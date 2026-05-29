#include "R5HFSMPlayerCreatorComponent.h"

bool UR5HFSMPlayerCreatorComponent::CheckPlayerName(const FString& PlayerName)
{
    return false;
}

FR5PlayerCreationInfo UR5HFSMPlayerCreatorComponent::GetDefaultPlayer()
{
    return {};
}

TArray<FR5PlayerCreationInfo> UR5HFSMPlayerCreatorComponent::GetPlayers()
{
    return {};
}

void UR5HFSMPlayerCreatorComponent::UpdatePlayerCustomizationPreview(const FString& PlayerId)
{
}

bool UR5HFSMPlayerCreatorComponent::IsDefaultPlayerCreated(const UObject* Wco)
{
    return false;
}

void UR5HFSMPlayerCreatorComponent::ResetPlayerPreviewToDefault()
{
}

void UR5HFSMPlayerCreatorComponent::PreviewEmptyPlayer()
{
}

UR5HFSMPlayerCreatorComponent::UR5HFSMPlayerCreatorComponent()
{
}
