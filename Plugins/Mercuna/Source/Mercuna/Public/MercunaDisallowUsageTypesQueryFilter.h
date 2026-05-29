#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaUsageTypes.h"
#include "MercunaDisallowUsageTypesQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FMercunaDisallowUsageTypesQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes DisallowedUsageTypes;
    
    MERCUNA_API FMercunaDisallowUsageTypesQueryFilter();
};

