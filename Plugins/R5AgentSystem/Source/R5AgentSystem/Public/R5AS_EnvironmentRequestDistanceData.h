#pragma once
#include "CoreMinimal.h"
#include "R5AS_EnvironmentRequestDistanceData.generated.h"

USTRUCT(BlueprintType)
struct FR5AS_EnvironmentRequestDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCapsuleSize;
    
    R5AGENTSYSTEM_API FR5AS_EnvironmentRequestDistanceData();
};

