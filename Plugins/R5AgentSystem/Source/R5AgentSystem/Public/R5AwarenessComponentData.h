#pragma once
#include "CoreMinimal.h"
#include "R5AwarenessComponentData.generated.h"

USTRUCT(BlueprintType)
struct FR5AwarenessComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndirectAggroRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIndirectAggroTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndirectAggroTickPeriod;
    
    R5AGENTSYSTEM_API FR5AwarenessComponentData();
};

