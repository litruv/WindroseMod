#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSaveGame -FallbackName=LocalPlayerSaveGame
#include "GameFramework/SaveGame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLAccountCloudSettings -FallbackName=R5BLAccountCloudSettings
#include "R5BLAccountCloudSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EColorVisionDeficiency -FallbackName=EColorVisionDeficiency
#include "R5SettingsCloud.generated.h"

UCLASS(Blueprintable)
class UR5SettingsCloud : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountCloudSettings AccountCloudSettings;
    
public:
    UR5SettingsCloud();

    UFUNCTION(BlueprintCallable)
    void SwitchTargetLockAutoSwitch(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SwitchHoldToGather(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindStrength(int32 InColorBlindStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(EColorVisionDeficiency InMode);
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetLockAutoSwitchEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStatsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldToGatherEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable)
    EColorVisionDeficiency GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableStats(bool NewValue);
    
};

