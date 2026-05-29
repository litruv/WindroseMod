#include "R5Character.h"
#include "AbilitySystemComponent.h"

void AR5Character::StaticRegisterNativesAR5Character()
{
}


UAbilitySystemComponent* AR5Character::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5Character::AR5Character(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}











AR5PlayerState* AR5Character::GetR5PlayerState() const
{
    return nullptr;
}

void AR5Character::OnCompositeMeshCustomizationChanged()
{
}

AActor* AR5Character::BP_GetTransport() const
{
    return nullptr;
}

UR5TargetLock_ControlComponent* AR5Character::GetTargetLockControlComponent() const
{
    return nullptr;
}

UR5MovementComponent* AR5Character::GetR5MovementComponent() const
{
    return nullptr;
}

UR5ShipownerComponent* AR5Character::GetShipownerComponent() const
{
    return nullptr;
}

UR5CompositeMeshComponent* AR5Character::GetCompositeMeshComponent() const
{
    return nullptr;
}

UR5DeathComponent* AR5Character::GetDeathComponent() const
{
    return nullptr;
}
