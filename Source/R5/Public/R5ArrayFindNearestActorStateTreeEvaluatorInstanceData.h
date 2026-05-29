#pragma once
#include "CoreMinimal.h"
#include "R5ArrayFindNearestActorStateTreeEvaluatorInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5ArrayFindNearestActorStateTreeEvaluatorInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainingDelayTime;
    
    FR5ArrayFindNearestActorStateTreeEvaluatorInstanceData();
};

