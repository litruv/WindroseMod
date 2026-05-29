#pragma once
#include "CoreMinimal.h"
#include "R5ForceDirectedEdge_VX_X_X.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_VX_X_X_API FR5ForceDirectedEdge_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealLength;
    
    FR5ForceDirectedEdge_VX_X_X();
};

