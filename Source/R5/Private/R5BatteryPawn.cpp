#include "R5BatteryPawn.h"
#include "AbilitySystemComponent.h"

void AR5BatteryPawn::StaticRegisterNativesAR5BatteryPawn()
{
}


UAbilitySystemComponent* AR5BatteryPawn::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5BatteryPawn::AR5BatteryPawn(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}



void AR5BatteryPawn::StopInteraction()
{
}

void AR5BatteryPawn::BindToBatteryManagerOwner(AActor* InBatteryManagerOwner)
{
}

AActor* AR5BatteryPawn::GetBatteryManagerOwner() const
{
    return nullptr;
}

UR5BatteryManagerComponent* AR5BatteryPawn::GetBatteryManager()
{
    return nullptr;
}

void AR5BatteryPawn::SingleShot()
{
}

void AR5BatteryPawn::SetPlayerPawn(APawn* Actor)
{
}

void AR5BatteryPawn::EnterToAim()
{
}

void AR5BatteryPawn::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
}

void AR5BatteryPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AR5BatteryPawn::StopInteractionServer_Implementation()
{
}
