#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5WorldDescriptionSettings.generated.h"

class UR5WDSParams;
class UR5WDSPresetParams;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5WDSCOMMON_API UR5WorldDescriptionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5WDSParams> WDSParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5WDSPresetParams> EditorPreset;
    
    UR5WorldDescriptionSettings();

};

