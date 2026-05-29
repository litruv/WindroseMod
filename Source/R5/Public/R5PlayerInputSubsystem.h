#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "ER5GamepadCursorMode.h"
#include "ER5InputMode.h"
#include "ER5InputType.h"
#include "R5OnInputModeChangedDelegate.h"
#include "R5OnInputTypeChangedDelegate.h"
#include "R5PlayerInputSubsystem.generated.h"

class UEnhancedInputComponent;
class UObject;
class UR5GamepadCursor;
class UR5PlayerInputSubsystem;
class UWidget;

UCLASS(Blueprintable)
class R5_API UR5PlayerInputSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnInputTypeChanged OnInputTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnInputModeChanged OnInputModeChanged;
    
    UR5PlayerInputSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ToggleCursorModes();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetWidgetToFocus(UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetInputMode(UObject* Wco, ER5InputMode Mode, bool bFlushInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreScroll(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetGamepadCursorMode(ER5GamepadCursorMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboardMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5InputType GetInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static UR5PlayerInputSubsystem* GetInputSubsystem(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5InputMode GetInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UR5GamepadCursor* GetGamepadCursorWidget(UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5GamepadCursorMode GetGamepadCursorMode() const;
    
    UFUNCTION(BlueprintCallable)
    static UEnhancedInputComponent* GetEnhancedInputComponent(const UObject* Wco);
    
};

