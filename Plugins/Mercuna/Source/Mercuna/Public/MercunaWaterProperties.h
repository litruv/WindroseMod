#pragma once
#include "CoreMinimal.h"
#include "EMercunaDeepWaterMode.h"
#include "MercunaWaterProperties.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaWaterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumShallowWaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDeepWaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaDeepWaterMode DeepWaterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShallowWaterCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeepWaterCostMultiplier;
    
    FMercunaWaterProperties();
};

