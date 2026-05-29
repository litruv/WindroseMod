#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerCondition.h"
#include "R5SpawnerCondition_Weather.generated.h"

class UR5NWeatherPreset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerCondition_Weather : public UR5SpawnerCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5NWeatherPreset*> WeatherPresets;
    
public:
    UR5SpawnerCondition_Weather();

};

