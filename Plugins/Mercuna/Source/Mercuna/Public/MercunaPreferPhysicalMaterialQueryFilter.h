#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaPreferPhysicalMaterialQueryFilter.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FMercunaPreferPhysicalMaterialQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PreferredPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonPreferredMaterialCostMultiplierOverride;
    
    MERCUNA_API FMercunaPreferPhysicalMaterialQueryFilter();
};

