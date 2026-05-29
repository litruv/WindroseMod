#include "R5UIMathLibrary.h"

float UR5UIMathLibrary::GetAzimuthToTarget(const FVector& OriginPosition, const FRotator& OriginRotation, const FVector& Target)
{
    return 0.f;
}

FVector2D UR5UIMathLibrary::SafeDivide2D(const FVector2D& v1, const FVector2D& v2)
{
    return {};
}

FVector2D UR5UIMathLibrary::Lerp2D(const FVector2D& v1, const FVector2D& v2, float Alpha)
{
    return FVector2D::ZeroVector;
}

bool UR5UIMathLibrary::IsRectsIntersecting(const FVector2D& RangeX1, const FVector2D& RangeY1, const FVector2D& RangeX2, const FVector2D& RangeY2)
{
    return false;
}

bool UR5UIMathLibrary::PointInRange(const FVector2D& Point, const FFloatInterval& Range)
{
    return false;
}

FVector2D UR5UIMathLibrary::Clamp2D(const FVector2D& Vector, const FVector2D& RangeA, const FVector2D& RangeB)
{
    return {};
}

UR5UIMathLibrary::UR5UIMathLibrary()
{
}
