#include "R5ReviveComponent.h"

UR5ReviveComponent::UR5ReviveComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ReviveComponent::SaveSpawnPointsToDB()
{
}

void UR5ReviveComponent::OnSpawnPointDestroyed(AActor* Actor)
{
}

void UR5ReviveComponent::SetLockLastLocationSave(bool Block)
{
}

void UR5ReviveComponent::OnPossessedChanged(APawn* OldPawn, APawn* NewPawn)
{
}

float UR5ReviveComponent::GetReviveTime() const
{
    return 0.f;
}

void UR5ReviveComponent::SaveCurrentPlayerDataToDB()
{
}

void UR5ReviveComponent::OnPawnDead(AActor* Actor)
{
}

bool UR5ReviveComponent::IsReviveInProgress() const
{
    return false;
}

void UR5ReviveComponent::StartAutosaveTimer()
{
}

void UR5ReviveComponent::ClientAlreadyChangeRevivePlace_Implementation()
{
}

void UR5ReviveComponent::PlayReviveSoundOnClient_Implementation()
{
}

void UR5ReviveComponent::ClientOnChangeRevivePlace_Implementation()
{
}

void UR5ReviveComponent::ClientPrepareForRevive_Implementation(FVector Location)
{
}

void UR5ReviveComponent::HideLoadingScreen_Implementation()
{
}

void UR5ReviveComponent::ClientReviveFinished_Implementation()
{
}

void UR5ReviveComponent::ClientOnCantChangeRevivePlace_Implementation()
{
}
