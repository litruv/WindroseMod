#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5CaptureTransformStateTreeEvaluatorInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CaptureTransformStateTreeEvaluatorInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Current;
    
    FR5CaptureTransformStateTreeEvaluatorInstanceData();
};

