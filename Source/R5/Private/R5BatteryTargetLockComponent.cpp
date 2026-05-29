#include "R5BatteryTargetLockComponent.h"

UR5BatteryTargetLockComponent::UR5BatteryTargetLockComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BatteryTargetLockComponent::OnRep_TargetLockEnabled()
{
}

void UR5BatteryTargetLockComponent::OnRep_Target(const TWeakObjectPtr<AActor> InPreviousTarget)
{
}

AActor* UR5BatteryTargetLockComponent::GetTarget() const
{
    return nullptr;
}

void UR5BatteryTargetLockComponent::ControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
}

bool UR5BatteryTargetLockComponent::IsTargetLockEnabled() const
{
    return false;
}

void UR5BatteryTargetLockComponent::CameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState)
{
}

AActor* UR5BatteryTargetLockComponent::GetPreviousTarget() const
{
    return nullptr;
}

void UR5BatteryTargetLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5BatteryTargetLockComponent::ServerReselectTarget_Implementation()
{
}

void UR5BatteryTargetLockComponent::ServerToggleActive_Implementation()
{
}
