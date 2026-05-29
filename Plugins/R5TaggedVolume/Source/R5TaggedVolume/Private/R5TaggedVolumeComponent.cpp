#include "R5TaggedVolumeComponent.h"

UR5TaggedVolumeComponent::UR5TaggedVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeType = ER5TaggedVolumeShapeType::Cylinder;
}


