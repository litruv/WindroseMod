#include "R5ShipAudioComponent.h"



bool UR5ShipAudioComponent::IsShantyEnabled() const

{

    return false;

}



void UR5ShipAudioComponent::GearChanged(int32 NewGear)

{

}



void UR5ShipAudioComponent::OnOwnerPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)

{

}



void UR5ShipAudioComponent::OnAggressiveTargetAdded(AActor* Target)

{

}



void UR5ShipAudioComponent::OnBatteryReloadTimeUpdated(uint8 BatteryIndex, float RemainingReloadTime)

{

}



void UR5ShipAudioComponent::OnCaptainChanged(AActor* Captain, AActor* OldCaptain)

{

}



UR5ShipAudioComponent::UR5ShipAudioComponent(const FObjectInitializer& ObjectInitializer)

    : Super(ObjectInitializer)

{

}



void UR5ShipAudioComponent::OnWaveBreakingSensorDataUpdate(UR5ShipSensor_WaterLevel* Sensor, const FR5ShipSensor_WaterLevelData& SensorData)

{

}



void UR5ShipAudioComponent::OnRep_Shanty(uint8 PrevShantyIdx)

{

}



void UR5ShipAudioComponent::OnEmbark(const FVector& EmbarkLocation)

{

}



void UR5ShipAudioComponent::ToggleShanty()

{

}



void UR5ShipAudioComponent::RudderAngleChanged(float PreviousAngle, float CurrentAngle)

{

}



void UR5ShipAudioComponent::OnDamageDealtInstanceCollected(FR5CollectedDamageInstance DamageInstance)

{

}



void UR5ShipAudioComponent::OnCameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState)

{

}



void UR5ShipAudioComponent::OnDisembark(const FVector& DisembarkLocation)

{

}



void UR5ShipAudioComponent::PlayNextShanty()

{

}

void UR5ShipAudioComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5ShipAudioComponent::ServerPlayNextShanty_Implementation()
{
}

void UR5ShipAudioComponent::ServerEnableShanty_Implementation()
{
}

void UR5ShipAudioComponent::ServerDisableShanty_Implementation()
{
}
