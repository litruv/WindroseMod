#include "R5MarkerComponent.h"

UR5MarkerComponent::UR5MarkerComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5MarkerComponent::CreateMarker(TSubclassOf<UR5MarkerModelBase> ModelClass)
{
}

UR5MarkerModelBase* UR5MarkerComponent::GetMarkerModel() const
{
    return nullptr;
}

void UR5MarkerComponent::DestroyMarkerComponent()
{
}

void UR5MarkerComponent::GetModel(TSubclassOf<UR5MarkerModelBase> ModelClass, UR5MarkerModelBase*& OutModel)
{
}
