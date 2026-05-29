#include "R5SymmetricSplineComponent.h"

float UR5SymmetricSplineComponent::GetClosestKeyToWorldPoint(const FVector& Point) const
{
    return 0.f;
}

float UR5SymmetricSplineComponent::GetKeyAtSplinePercentage(float Percentage) const
{
    return 0.f;
}

float UR5SymmetricSplineComponent::GetPercentageAtDistanceAlongSpline(double Distance) const
{
    return 0.f;
}

float UR5SymmetricSplineComponent::GetPercentageAtSplineInputKey(float Key) const
{
    return 0.f;
}

UR5SymmetricSplineComponent::UR5SymmetricSplineComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float UR5SymmetricSplineComponent::GetClampedKey(float Key) const
{
    return 0.f;
}

double UR5SymmetricSplineComponent::GetClampedDistance(double Distance) const
{
    return 0.0;
}
