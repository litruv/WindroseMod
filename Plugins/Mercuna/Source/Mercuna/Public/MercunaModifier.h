#pragma once
#include "CoreMinimal.h"
#include "MercunaUsageTypes.h"
#include "MercunaModifier.generated.h"

USTRUCT(BlueprintType)
struct FMercunaModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes UsageTypes;
    
    MERCUNA_API FMercunaModifier();
};

