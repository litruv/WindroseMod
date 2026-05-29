#pragma once
#include "CoreMinimal.h"
#include "MercunaContextualSteeringActorParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaContextualSteeringActorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CohesionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CohesionWeight;
    
    MERCUNA_API FMercunaContextualSteeringActorParameters();
};

