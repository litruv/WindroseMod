#include "MercunaNavGridVolume.h"

void AMercunaNavGridVolume::StaticRegisterNativesAMercunaNavGridVolume()
{
}


AMercunaNavGridVolume::AMercunaNavGridVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumePriority = 0;
}

void AMercunaNavGridVolume::RemoveFromGrid() {
}

void AMercunaNavGridVolume::AddToGrid(AMercunaNavGraph2D* NewNavGrid) {
}


