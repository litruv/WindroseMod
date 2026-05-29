#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=ETriggerEvent -FallbackName=ETriggerEvent
#include "InputTriggers.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "ER5InputType.h"
#include "R5UIInputActionData.h"
#include "R5InputHintWidget.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5InputHintWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UR5InputHintWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolded(FKey Key, ETriggerEvent TriggerEvent, float ElapsedSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void InputChanged(ER5InputType InputType);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FR5UIInputActionData> GetInputActionDataAndBindHold(const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5UIInputActionData> GetChordKeysFromInputAction(const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Draw();
    
};

