#include "R5Minimap.h"

FVector2D UR5Minimap::GetZoomRatio() const
{
    return {};
}

FVector4 UR5Minimap::GetPawnPosition() const
{
    return FVector4(0.f, 0.f, 0.f, 0.f);
}

void UR5Minimap::OnMarkerRemoved(UR5MarkerModelBase* MarkerModel)
{
}

float UR5Minimap::GetFogAreaScale() const
{
    return 0.f;
}

void UR5Minimap::OnMarkerAdded(UR5MarkerModelBase* MarkerModel)
{
}

UR5Minimap::UR5Minimap()
    : Super(FObjectInitializer::Get())
{
}
