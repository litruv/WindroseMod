#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "EMappingContext.h"
#include "R5SettingsRemapControlsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SettingsRemapControlsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FR5OnClick);
    
    UR5SettingsRemapControlsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetState(EMappingContext Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondDescription(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainDescription(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBindingKey(FKey OutKey);
    
    UFUNCTION(BlueprintCallable)
    void ClickConfirm();
    
    UFUNCTION(BlueprintCallable)
    void ClickCancel();
    
};

