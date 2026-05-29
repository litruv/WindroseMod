#pragma once
#include "CoreMinimal.h"
#include "R5RotateToStateTreeTaskInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5RotateToStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    FR5RotateToStateTreeTaskInstanceData();
};

