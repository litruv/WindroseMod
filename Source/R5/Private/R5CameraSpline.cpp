#include "R5CameraSpline.h"

float UR5CameraSpline::GetUpCameraAngleAtSplineInputKey(float InKey) const
{
    return 0.f;
}

float UR5CameraSpline::GetCameraMovementCoefficientAtSplineInputKey(float InKey) const
{
    return 0.f;
}

float UR5CameraSpline::GetAdditionalCameraFovAtSplineInputKey(float InKey) const
{
    return 0.f;
}

float UR5CameraSpline::GetKeyAtSplinePercentageWithFixedPoints(float Percentage, float OldKey) const
{
    return 0.f;
}

float UR5CameraSpline::GetPitchCameraFollowingAtSplineInputKey(float InKey) const
{
    return 0.f;
}

float UR5CameraSpline::GetNewPercentageByMovement(float OldPercentage, double DeltaMovement) const
{
    return 0.f;
}

float UR5CameraSpline::GetCameraFovAtSplineInputKey(float InKey) const
{
    return 0.f;
}

FVector UR5CameraSpline::GetRelativeNormalAtSplineInputKey(float Key) const
{
    return FVector::ZeroVector;
}

float UR5CameraSpline::GetRollCameraFollowingAtSplineInputKey(float InKey) const
{
    return 0.f;
}

FVector UR5CameraSpline::GetRelativeTangentAtSplineInputKey(float Key) const
{
    return FVector::ZeroVector;
}

float UR5CameraSpline::GetDownCameraAngleAtSplineInputKey(float InKey) const
{
    return 0.f;
}

FVector UR5CameraSpline::GetRelativeLocationAtSplineInputKey(float Key) const
{
    return FVector::ZeroVector;
}

float UR5CameraSpline::GetMaxCameraSpringLengthAtSplineInputKey(float InKey) const
{
    return 0.f;
}

UR5CameraSpline::UR5CameraSpline(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float UR5CameraSpline::GetPitchOffsetMultiplierAtSplineInputKey(float InKey) const
{
    return 0.f;
}
