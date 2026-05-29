#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=EPlayerMappableKeySlot -FallbackName=EPlayerMappableKeySlot
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingListEntry_Setting -FallbackName=GameSettingListEntry_Setting
#include "GameSettingListEntry_Setting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "R5SettingsListEntrySetting_KeyboardInput.generated.h"

class UR5SettingKeyboardInput;
class UR5SettingsRemapControlsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UR5SettingsListEntrySetting_KeyboardInput : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SettingKeyboardInput* KeyboardInputSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5SettingsRemapControlsWidget> WidgetClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKey OriginalKeyToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 KeyNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5SettingsRemapControlsWidget* RemapControlsWidget;
    
public:
    UR5SettingsListEntrySetting_KeyboardInput();

protected:
    UFUNCTION(BlueprintCallable)
    void UnMapSecondaryKeyFromSlot();
    
    UFUNCTION(BlueprintCallable)
    void UnMapPrimaryKeyFromSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopupRemapOpened(bool bOpened);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMappingCustomized() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSecondaryKeyClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandlePrimaryKeyClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleCancelKeySelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyFromSlot(EPlayerMappableKeySlot KeySlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmChanges();
    
};

