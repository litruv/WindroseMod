#include "R5WorldMarkersCanvas.h"

int32 UR5WorldMarkersCanvas::DefineZOrder(const FVector& Location) const
{
    return 0;
}

void UR5WorldMarkersCanvas::OnMarkerRemoved(UR5MarkerModelBase* MarkerModel)
{
}

void UR5WorldMarkersCanvas::OnMarkerAdded(UR5MarkerModelBase* MarkerModel)
{
}

FAnchors UR5WorldMarkersCanvas::CalculateMarkerAnchors(const FVector& position, bool bAbleToSnap, bool& bIsVisible)
{
    return false;
}

UR5WorldMarkersCanvas::UR5WorldMarkersCanvas()
    : Super(FObjectInitializer::Get())
{
}
