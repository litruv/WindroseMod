#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5ProjectileBallisticSettingsData.h"
#include "R5BallisticSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5BallisticSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ProjectileBallisticSettingsData BallisticSettings;
    
    UR5BallisticSettings();

};

