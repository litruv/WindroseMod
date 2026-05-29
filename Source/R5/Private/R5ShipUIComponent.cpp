#include "R5ShipUIComponent.h"

UR5ShipUIComponent::UR5ShipUIComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float UR5ShipUIComponent::GetCurrentEnergy() const
{
    return 0.f;
}

UR5BatteryManagerComponent* UR5ShipUIComponent::GetBatteryManagerComponent() const
{
    return nullptr;
}

FGameplayTag UR5ShipUIComponent::GetCurrentCameraState() const
{
    return {};
}

void UR5ShipUIComponent::RudderAngleChanged(float PreviousAngle, float CurrentAngle)
{
}

void UR5ShipUIComponent::CameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState)
{
}

bool UR5ShipUIComponent::IsCameraInAimingState() const
{
    return false;
}

void UR5ShipUIComponent::ChangeCameraModeForRadialMenu()
{
}

UR5SplineCameraMovementComponent* UR5ShipUIComponent::GetCameraMovementComponent() const
{
    return nullptr;
}

void UR5ShipUIComponent::SetCameraState(const FGameplayTag& NewState)
{
}

float UR5ShipUIComponent::GetWindAngle() const
{
    return 0.f;
}

float UR5ShipUIComponent::GetMaxEnergy() const
{
    return 0.f;
}

void UR5ShipUIComponent::GearChanged(int32 Gear)
{
}

float UR5ShipUIComponent::GetRudderAngle() const
{
    return 0.f;
}

FRotator UR5ShipUIComponent::GetShipRotation() const
{
    return {};
}

FRotator UR5ShipUIComponent::GetShipCameraRotation() const
{
    return {};
}

float UR5ShipUIComponent::GetRudderMaxAngle() const
{
    return 0.f;
}

float UR5ShipUIComponent::GetShipSpeed() const
{
    return 0.f;
}

int32 UR5ShipUIComponent::GetGear() const
{
    return 0;
}

bool UR5ShipUIComponent::IsCameraInState(FGameplayTag Tag) const
{
    return false;
}

FInt32Interval UR5ShipUIComponent::GetGearInterval() const
{
    return {};
}

void UR5ShipUIComponent::CameraZoomChanged(float NewZoom)
{
}

FGameplayTag UR5ShipUIComponent::GetCameraState() const
{
    return {};
}
