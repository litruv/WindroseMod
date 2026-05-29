#include "MercunaNavInvokerVolume.h"
#include "MercunaVolumeComponent.h"

void AMercunaNavInvokerVolume::StaticRegisterNativesAMercunaNavInvokerVolume()
{
}


AMercunaNavInvokerVolume::AMercunaNavInvokerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaVolumeComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaVolumeComponent*)RootComponent;
    this->NavGrid = NULL;
    this->Type = EMercunaInvokerVolumeType::Always;
}

void AMercunaNavInvokerVolume::SetType(const EMercunaInvokerVolumeType& NewType) {
}

void AMercunaNavInvokerVolume::SetSize(FVector Size) {
}

FVector AMercunaNavInvokerVolume::GetSize() const {
    return FVector{};
}

void AMercunaNavInvokerVolume::AddToGrid(AMercunaNavGroundGrid* NewNavGrid) {
}


