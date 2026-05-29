#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5TriggeredSoundSettings.generated.h"

class UR5TriggeredSoundSubsystemParams;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5TRIGGEREDSOUND_API UR5TriggeredSoundSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5TriggeredSoundSubsystemParams> Params;
    
    UR5TriggeredSoundSettings();

};

