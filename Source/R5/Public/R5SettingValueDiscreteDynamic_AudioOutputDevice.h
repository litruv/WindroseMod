#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=AudioOutputDeviceInfo -FallbackName=AudioOutputDeviceInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=EAudioDeviceChangedRole -FallbackName=EAudioDeviceChangedRole
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SwapAudioOutputResult -FallbackName=SwapAudioOutputResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingValueDiscreteDynamic -FallbackName=GameSettingValueDiscreteDynamic
#include "GameSettingValueDiscreteDynamic.h"
#include "R5SettingValueDiscreteDynamic_AudioOutputDevice.generated.h"

UCLASS(Blueprintable)
class UR5SettingValueDiscreteDynamic_AudioOutputDevice : public UGameSettingValueDiscreteDynamic {
    GENERATED_BODY()
public:
    UR5SettingValueDiscreteDynamic_AudioOutputDevice();

    UFUNCTION(BlueprintCallable)
    void OnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& AvailableDevices);
    
    UFUNCTION(BlueprintCallable)
    void DeviceAddedOrRemoved(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void DefaultDeviceChanged(EAudioDeviceChangedRole InRole, const FString& DeviceID);
    
};

