#include "R5MarkersSystemComponent.h"

void UR5MarkersSystemComponent::DestroyMarker(UR5MarkerModelBase* MarkerModel)
{
}

UR5MarkersSystemComponent::UR5MarkersSystemComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5MarkerModelBase* UR5MarkersSystemComponent::CreateMarker(const TSubclassOf<UR5MarkerModelBase>& MarkerClass, const FVector& position, FR5BLRecordId OwnerId)
{
    return nullptr;
}

void UR5MarkersSystemComponent::NewMarkerCreated(UR5MarkerModelBase* Model)
{
}

void UR5MarkersSystemComponent::DestroyMarkerByOwner_Implementation(const FR5BLRecordId OwnerId)
{
}
