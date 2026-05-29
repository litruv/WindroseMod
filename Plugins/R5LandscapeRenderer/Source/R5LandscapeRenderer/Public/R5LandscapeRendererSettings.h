#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5LandscapeRendererSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=R5LandscapeRendererSettings)
class R5LANDSCAPERENDERER_API UR5LandscapeRendererSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeveloperLayerPrefix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DigLayerName;
    
    UR5LandscapeRendererSettings();

};

