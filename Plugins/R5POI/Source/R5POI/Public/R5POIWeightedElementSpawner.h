#pragma once
#include "CoreMinimal.h"
#include "R5POIWeightedElementSpawner.generated.h"

class UR5POIElementSpawner;

USTRUCT(BlueprintType)
struct R5POI_API FR5POIWeightedElementSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5POIElementSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FR5POIWeightedElementSpawner();
};

