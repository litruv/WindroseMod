#pragma once
#include "CoreMinimal.h"
#include "R5N_WeatherSettings.generated.h"

class UDataAsset;

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_WeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> WeatherParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> WeatherSeasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeatherPresetDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> EditorDefaultPreset;
    
    FR5N_WeatherSettings();
};

