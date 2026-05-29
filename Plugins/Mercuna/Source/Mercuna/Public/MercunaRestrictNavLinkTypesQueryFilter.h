#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaRestrictNavLinkTypesQueryFilter.generated.h"

USTRUCT(BlueprintType)
struct FMercunaRestrictNavLinkTypesQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> AllowedNavLinks;
    
    MERCUNA_API FMercunaRestrictNavLinkTypesQueryFilter();
};

