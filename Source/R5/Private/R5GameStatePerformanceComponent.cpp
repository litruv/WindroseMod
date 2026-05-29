#include "R5GameStatePerformanceComponent.h"

FNetworkMetrics UR5GameStatePerformanceComponent::GetNetworkMetrics(const UObject* Wco)
{
    return {};
}

float UR5GameStatePerformanceComponent::GetServerFrameTime() const
{
    return 0.f;
}

UR5GameStatePerformanceComponent::UR5GameStatePerformanceComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5GameStatePerformanceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
