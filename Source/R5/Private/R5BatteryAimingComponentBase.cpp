#include "R5BatteryAimingComponentBase.h"



void UR5BatteryAimingComponentBase::OnRep_SelectedBattery()

{

}



void UR5BatteryAimingComponentBase::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)

{

}



void UR5BatteryAimingComponentBase::OnRep_BatteryManagerComponent(UR5BatteryManagerComponent* PrevManager)

{

}



UR5BatteryAimingComponentBase::UR5BatteryAimingComponentBase(const FObjectInitializer& ObjectInitializer)

    : Super(ObjectInitializer)

{

}

void UR5BatteryAimingComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
