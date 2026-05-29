#pragma once
#include "CoreMinimal.h"
#include "EMercunaGridType.h"
#include "MercunaAgentType.h"
#include "MercunaSupportedAgentTypes.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaSupportedAgentTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMercunaAgentType> AgentTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaGridType GridType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMercunaAgentType, int32> Types;
    
public:
    FMercunaSupportedAgentTypes();
};

