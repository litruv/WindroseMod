#pragma once
#include "CoreMinimal.h"
#include "R5ForceDirectedEdge.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_API FR5ForceDirectedEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealLength;
    
    FR5ForceDirectedEdge();
};

