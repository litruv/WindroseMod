#pragma once
#include "CoreMinimal.h"
#include "R5NewOverlapDamageExecutionParams.generated.h"

class UR5OverlapDamageStrategy;

USTRUCT(BlueprintType)
struct FR5NewOverlapDamageExecutionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5OverlapDamageStrategy*> ExecutionStrategies;
    
    R5_API FR5NewOverlapDamageExecutionParams();
};

