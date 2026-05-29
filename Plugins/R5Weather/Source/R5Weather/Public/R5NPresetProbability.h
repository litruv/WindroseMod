#pragma once
#include "CoreMinimal.h"
#include "R5NPresetProbability.generated.h"

USTRUCT(BlueprintType)
struct FR5NPresetProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    R5WEATHER_API FR5NPresetProbability();
};

