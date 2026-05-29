#include "MercunaNavExclusionVolume.h"
#include "MercunaVolumeComponent.h"

void AMercunaNavExclusionVolume::StaticRegisterNativesAMercunaNavExclusionVolume()
{
}


AMercunaNavExclusionVolume::AMercunaNavExclusionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaVolumeComponent>(TEXT("VolumeComponent"));
    this->VolumeComponent = (UMercunaVolumeComponent*)RootComponent;
    this->bApplyToAllNavGraphs = false;
    this->NavGraph = NULL;
    this->ExclusionType = EMercunaNavigationExclusionType::All;
}

void AMercunaNavExclusionVolume::SetSize(FVector Size) {
}

void AMercunaNavExclusionVolume::RemoveFromGraphs() {
}

FVector AMercunaNavExclusionVolume::GetSize() const {
    return FVector{};
}

void AMercunaNavExclusionVolume::AddToGraph(AMercunaNavGraph* NewNavGraph) {
}

void AMercunaNavExclusionVolume::AddToAllGraphs() {
}


