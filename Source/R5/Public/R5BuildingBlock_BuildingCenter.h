#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioGameplay -ObjectName=AudioGameplayCondition -FallbackName=AudioGameplayCondition
#include "Interfaces/IAudioGameplayCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5CommonInteractableBuildingBlock.h"
#include "R5BuildingBlock_BuildingCenter.generated.h"

class UAudioComponent;
class UAudioGameplayVolumeComponent;
class UDecalComponent;
class UMetaSoundSource;
class UR5BuildingCenterStorageComponent;
class USoundMix;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_BuildingCenter : public AR5CommonInteractableBuildingBlock, public IAudioGameplayCondition, public IR5InventoryInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaSoundSource* VolumeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* VolumeSoundMixModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VolumeAudio;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuildingCenterStorageComponent* StorageCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioGameplayVolumeComponent* AGVComponent;
    
public:
    AR5BuildingBlock_BuildingCenter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSounds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySounds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitSounds();
    
private:
    UFUNCTION(BlueprintCallable)
    void AudioVolumeExited();
    
    UFUNCTION(BlueprintCallable)
    void AudioVolumeEntered();
    

    // Fix for true pure virtual functions not being implemented
};

