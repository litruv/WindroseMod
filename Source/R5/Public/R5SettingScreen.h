#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingScreen -FallbackName=GameSettingScreen
#include "GameSettingScreen.h"
#include "R5SettingScreen.generated.h"

class UGameSetting;
class UR5SettingsPanelInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UR5SettingScreen : public UGameSettingScreen {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SettingsPanelInfo* Setting_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameSetting*> Tabs;
    
public:
    UR5SettingScreen();

};

