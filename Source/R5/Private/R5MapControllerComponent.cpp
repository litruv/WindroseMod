#include "R5MapControllerComponent.h"

UR5MapControllerComponent::UR5MapControllerComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FR5BiomeUIData UR5MapControllerComponent::GetCurrentBiomeData(const TSoftObjectPtr<UR5BiomesUIData>& BiomesData, const FGameplayTag& BiomeTag)
{
    return {};
}

void UR5MapControllerComponent::ScheduleFogRead(const FVector& InPosition)
{
}

float UR5MapControllerComponent::GetLastFogReadValue()
{
    return 0.f;
}

FGameplayTag UR5MapControllerComponent::GetCurrentBiomeTag() const
{
    return {};
}

void UR5MapControllerComponent::ClientPlayerFogUpdated_Implementation(int32 ChunkIndex, int32 ChunkValue)
{
}
