#pragma once
#include "CoreMinimal.h"
#include "R5POIVolume.h"
#include "R5POIAudioVolume.generated.h"

class UAttenuationVolumeComponent;
class UAudioGameplayVolumeComponent;
class UFilterVolumeComponent;
class UReverbVolumeComponent;
class USoundMix;

UCLASS(Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POIAudioVolume : public AR5POIVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMixModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioGameplayVolumeComponent* AGVComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttenuationVolumeComponent* AttenuationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFilterVolumeComponent* FilterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReverbVolumeComponent* ReverbComponent;
    
public:
    AR5POIAudioVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void VolumeExited();
    
    UFUNCTION(BlueprintCallable)
    void VolumeEntered();
    
};

