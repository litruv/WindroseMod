#include "R5POIAudioVolume.h"

void AR5POIAudioVolume::StaticRegisterNativesAR5POIAudioVolume()
{
}

//CROSS-MODULE INCLUDE V2: -ModuleName=AudioGameplayVolume -ObjectName=AttenuationVolumeComponent -FallbackName=AttenuationVolumeComponent
#include "AttenuationVolumeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioGameplayVolume -ObjectName=AudioGameplayVolumeComponent -FallbackName=AudioGameplayVolumeComponent
#include "AudioGameplayVolumeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioGameplayVolume -ObjectName=FilterVolumeComponent -FallbackName=FilterVolumeComponent
#include "FilterVolumeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioGameplayVolume -ObjectName=ReverbVolumeComponent -FallbackName=ReverbVolumeComponent
#include "ReverbVolumeComponent.h"

AR5POIAudioVolume::AR5POIAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->SoundMixModifier = NULL;
    this->AGVComponent = CreateDefaultSubobject<UAudioGameplayVolumeComponent>(TEXT("AGV"));
    this->AttenuationComponent = CreateDefaultSubobject<UAttenuationVolumeComponent>(TEXT("Attenuation"));
    this->FilterComponent = CreateDefaultSubobject<UFilterVolumeComponent>(TEXT("Filter"));
    this->ReverbComponent = CreateDefaultSubobject<UReverbVolumeComponent>(TEXT("Reverb"));
}

void AR5POIAudioVolume::VolumeExited() {
}

void AR5POIAudioVolume::VolumeEntered() {
}


