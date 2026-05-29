#include "MercunaNavVolume.h"
#include "MercunaVolumeComponent.h"

void AMercunaNavVolume::StaticRegisterNativesAMercunaNavVolume()
{
}


AMercunaNavVolume::AMercunaNavVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaVolumeComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaVolumeComponent*)RootComponent;
    this->PreciseBoundaries = true;
    this->NavGraphPtr = NULL;
}

void AMercunaNavVolume::SetSize(FVector Size) {
}

void AMercunaNavVolume::SetNavigationRotation(const FRotator& Rotation) {
}

FVector AMercunaNavVolume::GetSize() const {
    return FVector{};
}


