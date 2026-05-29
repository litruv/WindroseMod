#pragma once
#include "CoreMinimal.h"
#include "R5ForceDirectedEdge_V0_10_0.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_V0_10_0_API FR5ForceDirectedEdge_V0_10_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealLength;
    
    FR5ForceDirectedEdge_V0_10_0();
};

