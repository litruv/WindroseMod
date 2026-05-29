#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POIVariantComponent -FallbackName=R5POIVariantComponent
#include "R5POIVariantComponent.h"
#include "R5POIVariantComponentContextualSpawnPoints.generated.h"

USTRUCT(BlueprintType)
struct FR5POIVariantComponentContextualSpawnPoints : public FR5POIVariantComponent {
    GENERATED_BODY()
public:
    R5_API FR5POIVariantComponentContextualSpawnPoints();
};

