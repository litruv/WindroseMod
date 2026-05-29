#include "R5HUDScalingComponent.h"

UR5HUDScalingComponent::UR5HUDScalingComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float UR5HUDScalingComponent::GetWidescreenRatio() const
{
    return 0.f;
}

void UR5HUDScalingComponent::SetWidescreenRatio(float InWidescreenScalar) const
{
}
