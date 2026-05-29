#pragma once
#include "CoreMinimal.h"
#include "R5STTEvaluator_GetTargetHealthInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STTEvaluator_GetTargetHealthInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthPercent;
    
    FR5STTEvaluator_GetTargetHealthInstanceData();
};

