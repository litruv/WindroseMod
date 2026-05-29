#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5WaterAudioSystemSettings.generated.h"

class UR5WaterAudioSystemParams;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5WaterAudioSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5WaterAudioSystemParams> R5WaterAudioSystemParams;
    
    UR5WaterAudioSystemSettings();

};

