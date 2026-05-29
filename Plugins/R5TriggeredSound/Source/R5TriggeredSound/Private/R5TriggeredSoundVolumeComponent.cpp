#include "R5TriggeredSoundVolumeComponent.h"

UR5TriggeredSoundVolumeComponent::UR5TriggeredSoundVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 200.00f;
    this->Angle = 30.00f;
    this->Height = 150.00f;
    this->bIsOverrideSoundVolumeData = false;
}


