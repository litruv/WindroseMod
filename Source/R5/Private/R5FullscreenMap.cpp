#include "R5FullscreenMap.h"

FVector2D UR5FullscreenMap::GetRelativeForWorld(const FVector& position) const
{
    return {};
}

void UR5FullscreenMap::ZoomMap(float Delta)
{
}

float UR5FullscreenMap::GetFogAreaScale() const
{
    return 0.f;
}

void UR5FullscreenMap::OverrideMapCenter(const FVector2D& NewCenter)
{
}

FVector UR5FullscreenMap::GetMarkerPlacePosition()
{
    return {};
}

UR5MarkerModelBase* UR5FullscreenMap::FindModelUnderCursor(const TSubclassOf<UR5MarkerModelBase>& ModelClass)
{
    return nullptr;
}

void UR5FullscreenMap::OnMarkerRemoved(UR5MarkerModelBase* MarkerModel)
{
}

void UR5FullscreenMap::OverrideZoom(const float NewZoom)
{
}

void UR5FullscreenMap::MoveMap(const FVector2D& Delta)
{
}

void UR5FullscreenMap::OnMarkerAdded(UR5MarkerModelBase* MarkerModel)
{
}

UR5FullscreenMap::UR5FullscreenMap()
    : Super(FObjectInitializer::Get())
{
}
