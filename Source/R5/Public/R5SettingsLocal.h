#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
#include "GameFramework/GameUserSettings.h"
#include "ER5AllowBackgroundAudioSetting.h"
#include "ER5FrameGeneratorMode.h"
#include "ER5FrameGeneratorSupportType.h"
#include "ER5FrameGeneratorType.h"
#include "ER5StreamlineReflexMode.h"
#include "ER5UpscalerQuality.h"
#include "ER5UpscalerType.h"
#include "R5SettingsLocal.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, Config=Engine)
class UR5SettingsLocal : public UGameUserSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionBlurQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFOV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5UpscalerType UpscalerType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5UpscalerQuality UpscalerQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5FrameGeneratorType FrameGeneratorType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5FrameGeneratorMode FrameGeneratorMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5StreamlineReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpscalerSharpnessStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultUpscalerSharpnessStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidescreenRatioScalar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverallVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbientVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultOverallVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMusicVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSoundFXVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultUIVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAmbientVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDialogueVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterBloodWound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterDirt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensDirtEffect;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MonitorID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedDetectScalability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* NatureMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AllowBackgroundAudioSetting AllowAudioInBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AllowBackgroundAudioSetting DefaultAllowAudioInBackground;
    
public:
    UR5SettingsLocal();

    UFUNCTION(BlueprintCallable)
    void SetWidescreenRatioScalar(float InWidescreenRatioScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerType(ER5UpscalerType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerSharpnessStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerQuality(ER5UpscalerQuality InQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUIVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundFXVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetReflexMode(ER5StreamlineReflexMode NewReflexMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMonitorID(const FString& DisplayID);
    
    UFUNCTION(BlueprintCallable)
    void SetLensDirtIntensity(bool bLensDirtEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRDisplayMode(bool bCondition);
    
    UFUNCTION(BlueprintCallable)
    void SetGameFrameRateLimit(float NewFrameLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGeneratorType(ER5FrameGeneratorType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGeneratorMode(ER5FrameGeneratorMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomResolutionScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterDirt(bool bCharacterDirtEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterBloodWound(bool bBloodWoundEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOV(float InFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbientVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAudioInBackgroundSetting(ER5AllowBackgroundAudioSetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RunAutoBenchmark(bool bSaveImmediately);
    
    UFUNCTION(BlueprintCallable)
    float GetWidescreenRatioScalar() const;
    
    UFUNCTION(BlueprintCallable)
    ER5UpscalerType GetUpscalerType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetUpscalerSharpnessStrength() const;
    
    UFUNCTION(BlueprintCallable)
    ER5UpscalerQuality GetUpscalerQuality() const;
    
    UFUNCTION(BlueprintCallable)
    float GetUIVolume() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ER5UpscalerType> GetSupportedUpscalerTypes() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ER5UpscalerQuality> GetSupportedUpscalerQualityLevels(ER5UpscalerType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<ER5StreamlineReflexMode> GetSupportedReflexModes(ER5FrameGeneratorType InType) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<ER5FrameGeneratorType, ER5FrameGeneratorSupportType> GetSupportedFrameGeneratorTypes() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ER5FrameGeneratorMode> GetSupportedFrameGeneratorModes(ER5FrameGeneratorType InType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetSoundFXVolume() const;
    
    UFUNCTION(BlueprintCallable)
    ER5StreamlineReflexMode GetReflexMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetOverallVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMotionBlurQuality() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetMonitorID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLensDirtIntensity() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetGameFrameRateLimit() const;
    
    UFUNCTION(BlueprintCallable)
    ER5FrameGeneratorType GetFrameGeneratorType() const;
    
    UFUNCTION(BlueprintCallable)
    ER5FrameGeneratorMode GetFrameGeneratorMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDisplayGamma() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultUIVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultSoundFXVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultSharpness() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultOverallVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultMusicVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultCameraFOV() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultAmbientVolume() const;
    
    UFUNCTION(BlueprintCallable)
    ER5AllowBackgroundAudioSetting GetDefaultAllowAudioInBackgroundSetting() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCustomResolutionScale() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCharacterDirt();
    
    UFUNCTION(BlueprintCallable)
    bool GetCharacterBloodWound();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraFOV() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAudioOutputDeviceId() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAmbientVolume() const;
    
    UFUNCTION(BlueprintCallable)
    ER5AllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting() const;
    
};

