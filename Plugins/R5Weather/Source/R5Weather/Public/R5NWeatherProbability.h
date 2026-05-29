#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NPresetProbability.h"
#include "R5NWeatherProbability.generated.h"

UCLASS(Blueprintable)
class R5WEATHER_API UR5NWeatherProbability : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPresetProbability> PresetsProbabilities;
    
    UR5NWeatherProbability();

};

