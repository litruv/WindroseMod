#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5VersionizerSettings_MapVersionsEntry.h"
#include "R5VersionizerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=R5VersionizerSettings)
class R5_API UR5VersionizerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FR5VersionizerSettings_MapVersionsEntry> Maps;
    
    UR5VersionizerSettings();

};

