#include "R5ShipPawnBase.h"
#include "AbilitySystemComponent.h"

void AR5ShipPawnBase::StaticRegisterNativesAR5ShipPawnBase()
{
}


UAbilitySystemComponent* AR5ShipPawnBase::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5ShipPawnBase::AR5ShipPawnBase(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}







UR5FactionComponent* AR5ShipPawnBase::GetFactionComponent() const
{
    return nullptr;
}

UR5ShipAudioComponent* AR5ShipPawnBase::GetShipAudioComponent() const
{
    return nullptr;
}

void AR5ShipPawnBase::OnAllPassengersLeaveShip()
{
}

void AR5ShipPawnBase::OnRep_ShipId(const FR5BLRecordId& PreviousShipId)
{
}

void AR5ShipPawnBase::OnCrewStateChange(const FGameplayTag& PrevStateTag, const FGameplayTag& CurrentStateTag)
{
}

UR5ShipUIComponent* AR5ShipPawnBase::GetShipUIComponent() const
{
    return nullptr;
}

void AR5ShipPawnBase::CaptainChanged(AActor* NewCaptain, AActor* OldCaptain)
{
}

void AR5ShipPawnBase::OnShipWeightUpdate(float Delta, float TotalWeight)
{
}

void AR5ShipPawnBase::OnPawnDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage)
{
}

void AR5ShipPawnBase::OnRep_CurrentCrewState(const FGameplayTag& PrevCrewState)
{
}

void AR5ShipPawnBase::OnPassengersNumChanged(APawn* Passenger)
{
}

void AR5ShipPawnBase::OnShipStartSinking(const FGameplayTagContainer& DeathReason)
{
}

UR5ShipSailComponent* AR5ShipPawnBase::GetShipSailComponent() const
{
    return nullptr;
}

void AR5ShipPawnBase::InputModeChanged(ER5InputMode Mode)
{
}

void AR5ShipPawnBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
