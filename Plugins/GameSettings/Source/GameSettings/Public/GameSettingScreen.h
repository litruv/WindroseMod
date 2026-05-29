#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "GameSettingScreen.generated.h"

class UGameSetting;
class UGameSettingCollection;
class UGameSettingPanel;
class UGameSettingRegistry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingScreen : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingPanel* Settings_Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameSettingRegistry* Registry;
    
public:
    UGameSettingScreen();

    UFUNCTION(BlueprintCallable)
    void SetRegistry(UGameSettingRegistry* InRegistry);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSettings(const TArray<FName>& SettingDevNames);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSetting(UGameSetting* Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveSettingsBeenChanged() const;
    
    UFUNCTION(BlueprintCallable)
    UGameSettingCollection* GetSettingCollection(const FName& SettingDevName, bool& IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void CancelChanges();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToPopNavigation();
    
    UFUNCTION(BlueprintCallable)
    void ApplyChanges();
    
};

