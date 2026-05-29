#pragma once
#include "CoreMinimal.h"
#include "MercunaUsageTypes.h"
#include "MercunaUsageSpec.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaUsageSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes RequiredUsageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes AllowedUsageTypes;
    
    FMercunaUsageSpec();
};

