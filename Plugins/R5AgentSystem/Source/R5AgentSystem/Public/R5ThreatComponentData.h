#pragma once
#include "CoreMinimal.h"
#include "R5ThreatComponentData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FR5ThreatComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddToAwarenessDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealThreatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickPeriod;
    
    R5AGENTSYSTEM_API FR5ThreatComponentData();
};

