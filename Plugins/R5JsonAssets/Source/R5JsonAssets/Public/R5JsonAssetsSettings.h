#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5JsonAssetsSettings.generated.h"

class UR5JsonAssetsSettings;

UCLASS(Blueprintable, DefaultConfig, Config=R5JsonAssetsSettings)
class R5JSONASSETS_API UR5JsonAssetsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> JsonAssetsFolders;
    
    UR5JsonAssetsSettings();

    UFUNCTION(BlueprintCallable)
    static UR5JsonAssetsSettings* Get();
    
};

