#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=EnhancedInputUserSettings -FallbackName=EnhancedInputUserSettings
#include "UserSettings/EnhancedInputUserSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLGamepadSensitivity -FallbackName=ER5BLGamepadSensitivity
#include "ER5BLGamepadSensitivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLAccountInputSettings -FallbackName=R5BLAccountInputSettings
#include "R5BLAccountInputSettings.h"
#include "R5SettingsInput.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SettingsInput : public UEnhancedInputUserSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FR5BLAccountInputSettings AccountInputSettings;
    
public:
    UR5SettingsInput();

    UFUNCTION(BlueprintCallable)
    void SetUIPointerSensitivity(ER5BLGamepadSensitivity NewValue);
    
    UFUNCTION()
    void SetMouseSensitivityY(double NewValue);
    
    UFUNCTION()
    void SetMouseSensitivityX(double NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInvertVerticalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInvertHorizontalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadTargetingSensitivityPreset(ER5BLGamepadSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadMoveStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookSensitivityPreset(ER5BLGamepadSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadInvertVerticalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadInvertHorizontalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(const bool NewValue);
    
    UFUNCTION()
    void SetDashInputDirectionRegistrationDelay(double NewValue);
    
    UFUNCTION(BlueprintCallable)
    ER5BLGamepadSensitivity GetUIPointerSensitivity() const;
    
    UFUNCTION()
    double GetMouseSensitivityY() const;
    
    UFUNCTION()
    double GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseInvertVerticalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseInvertHorizontalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    ER5BLGamepadSensitivity GetGamepadTargetingSensitivityPreset() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadMoveStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadLookStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    ER5BLGamepadSensitivity GetGamepadLookSensitivityPreset() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGamepadInvertVerticalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGamepadInvertHorizontalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetForceFeedbackEnabled() const;
    
    UFUNCTION()
    double GetDashInputDirectionRegistrationDelay() const;
    
};

