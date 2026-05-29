#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Action.generated.h"

class UGameSettingAction;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Action : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSettingAction* ActionSetting;
    
public:
    UGameSettingListEntrySetting_Action();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
    UFUNCTION(BlueprintCallable)
    void HandleActionButtonClicked();
    
};

