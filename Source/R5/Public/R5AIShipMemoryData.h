#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_VectorMemoryKey -FallbackName=R5AS_VectorMemoryKey
#include "R5AS_VectorMemoryKey.h"
#include "R5AIShipMemoryData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIShipMemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_VectorMemoryKey InitialLocation;
    
    FR5AIShipMemoryData();
};

