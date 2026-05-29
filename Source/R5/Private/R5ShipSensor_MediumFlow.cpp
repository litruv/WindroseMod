#include "R5ShipSensor_MediumFlow.h"

void UR5ShipSensor_MediumFlow::OnRep_SensorData()
{
}

UR5ShipSensor_MediumFlow::UR5ShipSensor_MediumFlow(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ShipSensor_MediumFlow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
