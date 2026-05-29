#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaOverrideDefaultCostQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FMercunaOverrideDefaultCostQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCostMultiplierOverride;
    
    MERCUNA_API FMercunaOverrideDefaultCostQueryFilter();
};

