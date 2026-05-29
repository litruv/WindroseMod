#include "R5BatteryManagerComponent.h"

UR5BatteryManagerComponent::UR5BatteryManagerComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BatteryManagerComponent::RequestChangeAmmo(uint8 AmmoIndex, bool bChangeForAll)
{
}

void UR5BatteryManagerComponent::OnRep_ReloadEfficiency(float PrevReloadEfficiency)
{
}

TArray<FR5BatteryUIData> UR5BatteryManagerComponent::GetAllBatteriesData() const
{
    return {};
}

TArray<uint8> UR5BatteryManagerComponent::GetActiveBatteryIds(UR5BatteryAimingComponentBase* AimingComponent) const
{
    return {};
}

float UR5BatteryManagerComponent::GetDistanceToAimingPoint(AActor* AimOwner) const
{
    return 0.f;
}

int32 UR5BatteryManagerComponent::GetNumSetupAmmo(UR5BatteryAimingComponentBase* AimingComponent) const
{
    return 0;
}

uint8 UR5BatteryManagerComponent::GetSelectedBatteryIndex(const AActor* OwnerContext) const
{
    return 0;
}

bool UR5BatteryManagerComponent::GetSelectedBatteryUIData(FR5BatteryUIData& Data, AActor* OwnerContext) const
{
    return false;
}

TArray<FR5BatteryUIData> UR5BatteryManagerComponent::GetActiveBatteriesData() const
{
    return {};
}

bool UR5BatteryManagerComponent::GetBatteryUIData(uint8 BatteryIndex, FR5BatteryUIData& Data) const
{
    return false;
}

void UR5BatteryManagerComponent::OnRep_BatteryStateArray(const TArray<FR5BatteryReplicatedState>& PrevStateArray)
{
}

void UR5BatteryManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5BatteryManagerComponent::ServerSetBatteriesAmmo_Implementation(uint8 AmmoIndex, bool bChangeForAll, UR5BatteryAimingComponentBase* AimingComponent)
{
}

void UR5BatteryManagerComponent::ClientSetAimingScatter_Implementation(const TArray<float>& AimingScatter)
{
}
