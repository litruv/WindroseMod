#pragma once
#include "CoreMinimal.h"
#include "EMercunaAutoNavLinkTraversalType.h"
#include "MercunaNavLinkIdentifier.h"
#include "MercunaUsageTypes.h"
#include "MercunaAutoNavLinkForUpdate.generated.h"

USTRUCT(BlueprintType)
struct FMercunaAutoNavLinkForUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavLinkIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaAutoNavLinkTraversalType TraversalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes UsageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    MERCUNA_API FMercunaAutoNavLinkForUpdate();
};

