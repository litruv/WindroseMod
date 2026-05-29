#pragma once
#include "CoreMinimal.h"
#include "MercunaGroundNavigationDynamicSteeringParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaGroundNavigationDynamicSteeringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerToWeightRatio;
    
    MERCUNA_API FMercunaGroundNavigationDynamicSteeringParameters();
};

