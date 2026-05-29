#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "R5LocalPlayer.generated.h"

class UObject;
class UR5LocalPlayer;
class UR5SettingsCloud;
class UR5SettingsInput;
class UR5SettingsLocal;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5LocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UR5LocalPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UR5LocalPlayer* GetR5LocalPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SettingsLocal* GetLocalSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SettingsInput* GetInputSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SettingsCloud* GetCloudSettings() const;
    
};

