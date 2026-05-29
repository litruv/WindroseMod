#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5SettingsPanelInfo.generated.h"

class UGameSetting;
class UPanelWidget;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SettingsPanelInfo : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* rich_Description;
    
public:
    UR5SettingsPanelInfo();

    UFUNCTION(BlueprintCallable)
    void SetCurrentSettingDescription(UGameSetting* Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTextUpdated();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSettingDescription();
    
};

