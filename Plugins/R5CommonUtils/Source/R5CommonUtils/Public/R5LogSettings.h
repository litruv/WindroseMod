#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5LogSettingsData.h"
#include "R5LogSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5COMMONUTILS_API UR5LogSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsData LogSettings;
    
    UR5LogSettings();

};

