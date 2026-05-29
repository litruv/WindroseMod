#include "R5CropComponent.h"

UR5CropComponent::UR5CropComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5BLCropView* UR5CropComponent::GetCropView() const
{
    return nullptr;
}
