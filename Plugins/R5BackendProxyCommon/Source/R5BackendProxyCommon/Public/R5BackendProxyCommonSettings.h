#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5CountriesMapping.h"
#include "R5BackendProxyCommonSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5BACKENDPROXYCOMMON_API UR5BackendProxyCommonSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultRegion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CountriesMapping> CountriesArray;
    
    UR5BackendProxyCommonSettings();

};

