#pragma once
#include "CoreMinimal.h"
#include "ER5POIElementSpawnerLandingType.h"
#include "R5POIElementSpawnerLandingPolicy.generated.h"

USTRUCT(BlueprintType)
struct R5POI_API FR5POIElementSpawnerLandingPolicy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5POIElementSpawnerLandingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchNormal;
    
    FR5POIElementSpawnerLandingPolicy();
};

