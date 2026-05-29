#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NWeatherSeasons.generated.h"

class UR5NWeatherProbability;

UCLASS(Blueprintable)
class R5WEATHER_API UR5NWeatherSeasons : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UR5NWeatherProbability*> SeasonProbabilities;
    
    UR5NWeatherSeasons();

};

